#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6a80);

#define public_62e6ac3 _public_62e6ac3
#define public_62e6acf _public_62e6acf
#define public_62e6ad4 _public_62e6ad4

PROC_DECLARE(0x62e6a80, internal_62e6a80, public_62e6a80);
extern "C" NAKED register_t __cdecl internal_62e6a80()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        jne public_62e6ad4
        mov ecx, dword ptr ds : [esi+0x80]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x84]
        push edi
        lea edi, ds:[esi+4]
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [esi], 0
        je public_62e6ac3
        test eax, eax
        je public_62e6ac3
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push esi
        call dword ptr ds : [edx+0x6C]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0xB], al
        jne public_62e6acf
        public_62e6ac3 : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [edi], 0
        public_62e6acf : nop
        mov byte ptr ds : [esi+0x7C], 1
        pop edi
        public_62e6ad4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62e6a80)
    }
}

#undef public_62e6ac3
#undef public_62e6acf
#undef public_62e6ad4
