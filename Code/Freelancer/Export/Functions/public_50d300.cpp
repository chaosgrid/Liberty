#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50d300);

#define public_50d314 _public_50d314
#define public_50d333 _public_50d333

PROC_DECLARE(0x50d300, internal_50d300, public_50d300);
extern "C" NAKED register_t __cdecl internal_50d300()
{
    __asm
    {
        push ebx
        push esi
        mov edx, ecx
        push edi
        lea eax, ds:[edx+8]
        mov ecx, 0xD
        xor ebx, ebx
        mov esi, 0x3F800000
        public_50d314 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax-4], ebx
        mov dword ptr ds : [eax-8], ebx
        mov dword ptr ds : [eax+8], esi
        add eax, 0x18
        dec ecx
        jne public_50d314
        lea eax, ds:[edx+0x138]
        mov ecx, 0xC
        public_50d333 : nop
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+0x10], esi
        add eax, 0x18
        dec ecx
        jne public_50d333
        mov eax, 1
        lea edi, ds:[edx+0x258]
        mov ecx, 0xC
        rep stosd
        mov dword ptr ds : [edx+0x2BC], ebx
        mov byte ptr ds : [edx+0x2C0], bl
        mov dword ptr ds : [edx+0x288], esi
        mov dword ptr ds : [edx+0x28C], esi
        mov dword ptr ds : [edx+0x290], esi
        mov dword ptr ds : [edx+0x294], esi
        mov dword ptr ds : [edx+0x298], esi
        mov dword ptr ds : [edx+0x29C], esi
        mov dword ptr ds : [edx+0x2A0], esi
        mov dword ptr ds : [edx+0x2A4], esi
        mov dword ptr ds : [edx+0x2A8], esi
        mov eax, 0x3E800000
        pop edi
        mov dword ptr ds : [edx+0x2F4], esi
        pop esi
        mov dword ptr ds : [edx+0x2E8], eax
        mov dword ptr ds : [edx+0x2EC], eax
        mov byte ptr ds : [edx+0x2E4], bl
        mov dword ptr ds : [edx+0x2E0], ebx
        mov dword ptr ds : [edx+0x2B0], ebx
        mov dword ptr ds : [edx+0x2B8], ebx
        mov dword ptr ds : [edx+0x2F0], 0x3F000000
        mov dword ptr ds : [edx+0x2AC], 0x40000000
        mov dword ptr ds : [edx+0x2B4], 5
        mov dword ptr ds : [edx+0x2F8], 8
        mov dword ptr ds : [edx+0x2FC], 0xF
        mov dword ptr ds : [edx+0x300], 0x19
        mov dword ptr ds : [edx+0x304], 0x28
        mov dword ptr ds : [edx+0x308], 0x3C
        mov eax, edx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x50d300)
    }
}

#undef public_50d314
#undef public_50d333
