#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_588540);

#define public_58855d _public_58855d
#define public_58864c _public_58864c
#define public_588660 _public_588660
#define public_5886ba _public_5886ba

PROC_DECLARE(0x588540, internal_588540, public_588540);
extern "C" NAKED register_t __cdecl internal_588540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov esi, ecx
        je public_58855d
        mov edx, dword ptr ds : [esi]
        push ebx
        push eax
        call dword ptr ds : [edx+0x98]
        public_58855d : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+8], ecx
        mov edi, dword ptr ds : [edx]
        lea eax, ds:[esi+0xA8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [esi+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_58864c
        fld dword ptr ds : [eax]
        lea edi, ss:[esp+0x1C]
        fadd dword ptr ds : [esi+0x60]
        push edi
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], 0x3F800000
        fadd dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0x68]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ds : [public_5c6d90]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_58864c : nop
        mov ebp, dword ptr ss : [esp+0x58]
        cmp ebp, ebx
        je public_5886ba
        lea edx, ds:[esi+0x1D0]
        mov eax, ebp
        sub edx, ebp
        mov edi, edi
        public_588660 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        cmp cl, bl
        jne public_588660
        lea edi, ds:[esi+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_5886ba
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_5886ba
        mov edx, dword ptr ds : [eax]
        push edi
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        mov byte ptr ds : [esi+0x328], al
        public_5886ba : nop
        mov al, byte ptr ss : [esp+0x60]
        fild dword ptr ss : [esp+0x7C]
        mov cl, byte ptr ss : [esp+0x64]
        mov dl, byte ptr ss : [esp+0x68]
        mov byte ptr ds : [esi+0x2D1], al
        fstp dword ptr ds : [esi+0x418]
        mov al, byte ptr ss : [esp+0x6C]
        fild dword ptr ss : [esp+0x80]
        mov byte ptr ds : [esi+0x34C], cl
        mov cl, byte ptr ss : [esp+0x70]
        mov byte ptr ds : [esi+0x344], dl
        fstp dword ptr ds : [esi+0x41C]
        mov dl, byte ptr ss : [esp+0x74]
        mov byte ptr ds : [esi+0x345], al
        mov al, byte ptr ss : [esp+0x78]
        mov byte ptr ds : [esi+0x346], cl
        mov cl, byte ptr ss : [esp+0x84]
        mov byte ptr ds : [esi+0x34B], dl
        mov edx, dword ptr ss : [esp+0x88]
        mov byte ptr ds : [esi+0x34A], al
        mov byte ptr ds : [esi+0x349], cl
        mov edi, dword ptr ds : [edx]
        lea eax, ds:[esi+0x338]
        mov ecx, eax
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [esi+0x33C]
        mov edx, dword ptr ds : [esi+0x340]
        mov eax, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+0x334], eax
        mov dword ptr ds : [esi+0x330], ecx
        mov dword ptr ds : [esi+0x32C], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 0x3C
        UNREACHABLE_TRAP(0x588540)
    }
}

#undef public_58855d
#undef public_58864c
#undef public_588660
#undef public_5886ba
