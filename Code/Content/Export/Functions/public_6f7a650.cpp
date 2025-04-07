#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30720);
CLANG_FORWARD_PROC_SYMBOL(public_6f309a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a650);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f0e0);

#define public_6f7a680 _public_6f7a680
#define public_6f7a6cd _public_6f7a6cd
#define public_6f7a705 _public_6f7a705
#define public_6f7a710 _public_6f7a710
#define public_6f7a722 _public_6f7a722

PROC_DECLARE(0x6f7a650, internal_6f7a650, public_6f7a650);
extern "C" NAKED register_t __cdecl internal_6f7a650()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        cmp edi, ecx
        mov ebx, eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], ebx
        je public_6f7a705
        add edi, 0x10
        lea esi, ds:[eax+0x28]
        public_6f7a680 : nop
        lea eax, ds:[edi-0x10]
        push eax
        mov ecx, ebx
        call public_6f7ee40
        mov ecx, dword ptr ds : [edi]
        lea edx, ds:[edi+4]
        mov dword ptr ds : [esi-0x18], ecx
        push edx
        lea ecx, ds:[esi-0x14]
        call public_6f7f0e0
        lea ebp, ds:[edi+0x14]
        lea eax, ds:[esi-4]
        cmp eax, ebp
        je public_6f7a6cd
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        lea ebx, ds:[esi-4]
        push ecx
        mov ecx, ebx
        call public_6f309a0
        mov dl, byte ptr ds : [edi+0x15]
        push ebp
        mov ecx, ebx
        mov byte ptr ds : [esi-3], dl
        call public_6f30a60
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f7a6cd : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x10], eax
        mov cl, byte ptr ds : [edi+0x2C]
        mov byte ptr ds : [esi+0x14], cl
        mov dl, byte ptr ds : [edi+0x2D]
        mov byte ptr ds : [esi+0x15], dl
        mov eax, dword ptr ds : [edi+0x30]
        add edi, 0x44
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 0x44
        lea ecx, ds:[edi-0x10]
        add esi, 0x44
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6f7a680
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7a705 : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        mov edi, ebx
        je public_6f7a722
        mov edi, edi
        public_6f7a710 : nop
        mov ecx, edi
        call public_6f30720
        add edi, 0x44
        cmp edi, esi
        jne public_6f7a710
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7a722 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ebx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f7a650)
    }
}

#undef public_6f7a680
#undef public_6f7a6cd
#undef public_6f7a705
#undef public_6f7a710
#undef public_6f7a722
