#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414c50);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_JUMP_SYMBOL(public_5b884b);

#define public_414c85 _public_414c85
#define public_414c90 _public_414c90
#define public_414cc6 _public_414cc6
#define public_414cdf _public_414cdf
#define public_414cf2 _public_414cf2

PROC_DECLARE(0x414c50, internal_414c50, public_414c50);
extern "C" NAKED register_t __cdecl internal_414c50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b884b @0x414c52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b884b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx], offset public_5c8cb8
        mov ebp, dword ptr ds : [ebx+0x14]
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_414cc6
        public_414c85 : nop
        mov esi, ebp
        mov ebp, dword ptr ss : [ebp+0x24]
        lea ebx, ds:[ebx]
        public_414c90 : nop
        mov eax, esi
        mov dword ptr ss : [esp+0x10], eax
        mov esi, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0x24], edi
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ds : [eax+0x20], edi
        mov edx, dword ptr ds : [public_616648]
        push 1
        push edx
        mov ecx, offset public_616640
        call public_537260
        cmp esi, edi
        jne public_414c90
        cmp ebp, edi
        jne public_414c85
        mov dword ptr ds : [ebx+0x14], edi
        public_414cc6 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edi
        mov esi, dword ptr ds : [public_5c71d8]
        je public_414cdf
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        public_414cdf : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edi
        je public_414cf2
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        public_414cf2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x414c50)
    }
}

#undef public_414c85
#undef public_414c90
#undef public_414cc6
#undef public_414cdf
#undef public_414cf2
