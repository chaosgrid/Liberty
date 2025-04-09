#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437b70);
CLANG_FORWARD_PROC_SYMBOL(public_439c10);
CLANG_FORWARD_PROC_SYMBOL(public_43ce50);
CLANG_FORWARD_PROC_SYMBOL(public_43d010);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9383);

#define public_439c50 _public_439c50
#define public_439c59 _public_439c59
#define public_439c5b _public_439c5b
#define public_439c77 _public_439c77
#define public_439c80 _public_439c80
#define public_439ca0 _public_439ca0
#define public_439cb0 _public_439cb0
#define public_439cc0 _public_439cc0
#define public_439ccf _public_439ccf
#define public_439ce0 _public_439ce0
#define public_439ce9 _public_439ce9
#define public_439ceb _public_439ceb
#define public_439d07 _public_439d07
#define public_439d0c _public_439d0c
#define public_439d30 _public_439d30
#define public_439d40 _public_439d40
#define public_439d50 _public_439d50
#define public_439d5f _public_439d5f

PROC_DECLARE(0x439c10, internal_439c10, public_439c10);
extern "C" NAKED register_t __cdecl internal_439c10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9383 @0x439c12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9383
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ds:[ebx+0x30]
        mov dword ptr ss : [esp+0x20], 1
        call public_437b70
        lea edi, ds:[ebx+0x18]
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x20], 2
        xor esi, esi
        public_439c50 : nop
        test esi, esi
        jne public_439c59
        mov esi, dword ptr ds : [edi+4]
        jmp public_439c5b
        public_439c59 : nop
        mov esi, dword ptr ds : [esi]
        public_439c5b : nop
        test esi, esi
        je public_439c80
        mov ebp, dword ptr ds : [esi+8]
        test ebp, ebp
        je public_439c77
        mov ecx, ebp
        call dword ptr ds : [public_5c6148]
        push ebp
        call public_5b7e1d
        add esp, 4
        public_439c77 : nop
        mov dword ptr ds : [esi+8], 0
        jmp public_439c50
        public_439c80 : nop
        mov ecx, edi
        call public_43ce50
        mov esi, dword ptr ds : [edi+4]
        xor ebp, ebp
        cmp esi, ebp
        mov byte ptr ds : [edi+0x14], 0
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ds : [edi], offset public_5cb02c
        je public_439cb0
        nop 
        public_439ca0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_43d010
        cmp esi, ebp
        jne public_439ca0
        public_439cb0 : nop
        mov esi, dword ptr ds : [edi+0x10]
        cmp esi, ebp
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+4], ebp
        je public_439ccf
        lea ecx, ds:[ecx]
        public_439cc0 : nop
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        push 1
        call public_5afe80
        cmp esi, ebp
        jne public_439cc0
        public_439ccf : nop
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ss : [esp+0x20], 3
        xor esi, esi
        lea esp, ss:[esp]
        public_439ce0 : nop
        cmp esi, ebp
        jne public_439ce9
        mov esi, dword ptr ds : [ebx+4]
        jmp public_439ceb
        public_439ce9 : nop
        mov esi, dword ptr ds : [esi]
        public_439ceb : nop
        cmp esi, ebp
        je public_439d0c
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebp
        je public_439d07
        mov ecx, edi
        call dword ptr ds : [public_5c6130]
        push edi
        call public_5b7e1d
        add esp, 4
        public_439d07 : nop
        mov dword ptr ds : [esi+8], ebp
        jmp public_439ce0
        public_439d0c : nop
        mov ecx, ebx
        call public_43ce50
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        mov byte ptr ds : [ebx+0x14], 0
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [ebx], offset public_5cb024
        je public_439d40
        lea esp, ss:[esp]
        public_439d30 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, ebx
        call public_43d010
        cmp esi, ebp
        jne public_439d30
        public_439d40 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        cmp esi, ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [ebx+4], ebp
        je public_439d5f
        lea ecx, ds:[ecx]
        public_439d50 : nop
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        push 1
        call public_5afe80
        cmp esi, ebp
        jne public_439d50
        public_439d5f : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [ebx+0x10], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x439c10)
    }
}

#undef public_439c50
#undef public_439c59
#undef public_439c5b
#undef public_439c77
#undef public_439c80
#undef public_439ca0
#undef public_439cb0
#undef public_439cc0
#undef public_439ccf
#undef public_439ce0
#undef public_439ce9
#undef public_439ceb
#undef public_439d07
#undef public_439d0c
#undef public_439d30
#undef public_439d40
#undef public_439d50
#undef public_439d5f
