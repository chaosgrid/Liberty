#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62ecfb0);

#define public_62ed031 _public_62ed031
#define public_62ed067 _public_62ed067

PROC_DECLARE(0x62ecfb0, internal_62ecfb0, public_62ecfb0);
extern "C" NAKED register_t __cdecl internal_62ecfb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_62ed067
        mov ecx, dword ptr ds : [edi+0x1580]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62ed031
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1820]
        test cl, cl
        je public_62ed031
        mov cl, byte ptr ds : [eax+0x1429]
        test cl, cl
        jne public_62ed031
        mov eax, dword ptr ds : [eax+0x1370]
        test eax, eax
        je public_62ed031
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62ed031
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62ed031
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62ed031
        mov ecx, eax
        call public_62ac230
        test eax, eax
        je public_62ed031
        mov ecx, eax
        call public_62a66a0
        mov edx, dword ptr ds : [esi+4]
        mov edi, eax
        mov byte ptr ds : [edx+0x14], 1
        public_62ed031 : nop
        mov eax, dword ptr ds : [edi+0x16F4]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x16FC]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [edi+0x16F8]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, dword ptr ds : [edi+0x16E8]
        mov dword ptr ds : [esi+0x40], eax
        mov ecx, dword ptr ds : [edi+0x16F0]
        mov dword ptr ds : [esi+0x44], ecx
        mov edx, dword ptr ds : [edi+0x16EC]
        mov dword ptr ds : [esi+0x48], edx
        public_62ed067 : nop
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ecfb0)
    }
}

#undef public_62ed031
#undef public_62ed067
