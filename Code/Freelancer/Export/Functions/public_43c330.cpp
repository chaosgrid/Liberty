#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c330);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9438);

#define public_43c358 _public_43c358
#define public_43c361 _public_43c361
#define public_43c363 _public_43c363
#define public_43c37f _public_43c37f
#define public_43c384 _public_43c384
#define public_43c390 _public_43c390
#define public_43c3a3 _public_43c3a3
#define public_43c3aa _public_43c3aa
#define public_43c3ae _public_43c3ae
#define public_43c3c4 _public_43c3c4
#define public_43c3d5 _public_43c3d5

PROC_DECLARE(0x43c330, internal_43c330, public_43c330);
extern "C" NAKED register_t __cdecl internal_43c330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9438 @0x43c332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9438
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor esi, esi
        push ebp
        public_43c358 : nop
        cmp esi, ebx
        jne public_43c361
        mov esi, dword ptr ds : [edi+4]
        jmp public_43c363
        public_43c361 : nop
        mov esi, dword ptr ds : [esi]
        public_43c363 : nop
        cmp esi, ebx
        je public_43c384
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_43c37f
        mov ecx, ebp
        call dword ptr ds : [public_5c6148]
        push ebp
        call public_5b7e1d
        add esp, 4
        public_43c37f : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_43c358
        public_43c384 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        pop ebp
        je public_43c3ae
        lea esp, ss:[esp]
        public_43c390 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        je public_43c3a3
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_43c3aa
        public_43c3a3 : nop
        push 1
        call public_5afe80
        public_43c3aa : nop
        cmp esi, ebx
        jne public_43c390
        public_43c3ae : nop
        mov esi, dword ptr ds : [edi+0x10]
        cmp esi, ebx
        mov byte ptr ds : [edi+0x14], bl
        mov dword ptr ds : [edi], offset public_5cb02c
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        je public_43c3d5
        public_43c3c4 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        jne public_43c3c4
        public_43c3d5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x43c330)
    }
}

#undef public_43c358
#undef public_43c361
#undef public_43c363
#undef public_43c37f
#undef public_43c384
#undef public_43c390
#undef public_43c3a3
#undef public_43c3aa
#undef public_43c3ae
#undef public_43c3c4
#undef public_43c3d5
