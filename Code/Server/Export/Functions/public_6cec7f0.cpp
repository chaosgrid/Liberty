#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e750);

#define public_6cec815 _public_6cec815
#define public_6cec8a9 _public_6cec8a9
#define public_6cec8ad _public_6cec8ad
#define public_6cec8b9 _public_6cec8b9

PROC_DECLARE(0x6cec7f0, internal_6cec7f0, public_6cec7f0);
extern "C" NAKED register_t __cdecl internal_6cec7f0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x80]
        push edi
        mov edi, dword ptr ds : [ecx]
        xor ebx, ebx
        xor al, al
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6cec8b9
        mov ebp, dword ptr ss : [esp+0x38]
        public_6cec815 : nop
        cmp al, bl
        jne public_6cec8b9
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [esp+0x34]
        cmp ecx, dword ptr ds : [edx]
        jne public_6cec8ad
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        push ebp
        lea ecx, ds:[edi+8]
        mov byte ptr ss : [esp+0x40], 1
        call dword ptr ds : [public_6d64320]
        xor ebx, ebx
        test al, al
        je public_6cec8a9
        cmp dword ptr ds : [esi+0x28], ebx
        je public_6cec8a9
        mov ecx, dword ptr ds : [public_6d6402c]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dx, word ptr ds : [ecx]
        mov ecx, esi
        mov word ptr ss : [esp+0x20], dx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov byte ptr ss : [esp+0x2C], 1
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x20], edx
        mov word ptr ss : [esp+0x24], bp
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x30], bl
        call public_6d0e750
        public_6cec8a9 : nop
        mov al, byte ptr ss : [esp+0x38]
        public_6cec8ad : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_6cec815
        public_6cec8b9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6cec7f0)
    }
}

#undef public_6cec815
#undef public_6cec8a9
#undef public_6cec8ad
#undef public_6cec8b9
