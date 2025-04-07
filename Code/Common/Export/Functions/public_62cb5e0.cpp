#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1870);
CLANG_FORWARD_PROC_SYMBOL(public_62cb5e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);

#define public_62cb62c _public_62cb62c
#define public_62cb68e _public_62cb68e
#define public_62cb6a5 _public_62cb6a5

PROC_DECLARE(0x62cb5e0, internal_62cb5e0, public_62cb5e0);
extern "C" NAKED register_t __cdecl internal_62cb5e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x281]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr ds : [esi+0x29C], ebx
        je public_62cb62c
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62cb62c
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_62cb62c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62cb62c
        mov ecx, eax
        call public_62b1870
        public_62cb62c : nop
        mov edx, dword ptr ds : [esi+0x90]
        lea ecx, ds:[esi+0x90]
        mov byte ptr ds : [esi+0x281], bl
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x34]
        lea ecx, ds:[esi+0x34]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x150]
        lea ecx, ds:[esi+0x150]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x1C8]
        lea ecx, ds:[esi+0x1C8]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x264]
        lea ecx, ds:[esi+0x264]
        call dword ptr ds : [edx+0x10]
        cmp byte ptr ds : [esi+0x282], bl
        je public_62cb68e
        mov ecx, dword ptr ds : [esi+0x278]
        cmp ecx, ebx
        je public_62cb68e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_62cb68e : nop
        cmp byte ptr ds : [esi+0x284], bl
        je public_62cb6a5
        mov ecx, dword ptr ds : [esi+0x27C]
        cmp ecx, ebx
        je public_62cb6a5
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_62cb6a5 : nop
        mov byte ptr ds : [esi+0x282], bl
        mov byte ptr ds : [esi+0x284], bl
        mov dword ptr ds : [esi+0x27C], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62cb5e0)
    }
}

#undef public_62cb62c
#undef public_62cb68e
#undef public_62cb6a5
