#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264a40);
CLANG_FORWARD_PROC_SYMBOL(public_626a700);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6274300);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63924e6);

#define public_6264a73 _public_6264a73
#define public_6264a8a _public_6264a8a
#define public_6264a91 _public_6264a91
#define public_6264aa0 _public_6264aa0
#define public_6264ab5 _public_6264ab5
#define public_6264ae0 _public_6264ae0
#define public_6264af6 _public_6264af6

PROC_DECLARE(0x6264a40, internal_6264a40, public_6264a40);
extern "C" NAKED register_t __cdecl internal_6264a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63924e6 @0x6264a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63924e6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_6264a91
        public_6264a73 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6264a8a
        mov ecx, edi
        call public_6274300
        push edi
        call public_6391d5a
        add esp, 4
        public_6264a8a : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x28]
        jne public_6264a73
        public_6264a91 : nop
        mov ebx, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x24]
        je public_6264ab5
        lea ecx, ds:[ecx]
        public_6264aa0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_6264aa0
        public_6264ab5 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[ebp+0x10]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_626a700
        mov ebx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ebx]
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x20], 0
        je public_6264af6
        lea esp, ss:[esp]
        public_6264ae0 : nop
        mov eax, ebp
        mov ebp, dword ptr ss : [ebp]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6271cc0
        cmp ebp, ebx
        jne public_6264ae0
        public_6264af6 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_626a700
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6264a40)
    }
}

#undef public_6264a73
#undef public_6264a8a
#undef public_6264a91
#undef public_6264aa0
#undef public_6264ab5
#undef public_6264ae0
#undef public_6264af6
