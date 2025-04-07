#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1870);
CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);

#define public_62cef83 _public_62cef83
#define public_62cef85 _public_62cef85
#define public_62cef8c _public_62cef8c
#define public_62cefa0 _public_62cefa0

PROC_DECLARE(0x62cef40, internal_62cef40, public_62cef40);
extern "C" NAKED register_t __cdecl internal_62cef40()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp ecx, ebx
        je public_62cefa0
        mov dl, byte ptr ds : [esi+0x28]
        mov al, byte ptr ds : [esi+0x54]
        or dl, 1
        cmp al, bl
        mov byte ptr ds : [esi+0x55], bl
        mov byte ptr ds : [esi+0x56], bl
        mov byte ptr ds : [esi+0x28], dl
        je public_62cef8c
        mov byte ptr ds : [esi+0x54], bl
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_62cef83
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62cef85
        public_62cef83 : nop
        xor eax, eax
        public_62cef85 : nop
        mov ecx, eax
        call public_62b1870
        public_62cef8c : nop
        mov ecx, esi
        call public_62d20f0
        push 3
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x34], ebx
        call public_62d21d0
        public_62cefa0 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62cef40)
    }
}

#undef public_62cef83
#undef public_62cef85
#undef public_62cef8c
#undef public_62cefa0
