#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_45e470);
CLANG_FORWARD_PROC_SYMBOL(public_57c440);

#define public_45f531 _public_45f531
#define public_45f535 _public_45f535
#define public_45f582 _public_45f582
#define public_45f5b3 _public_45f5b3
#define public_45f5cd _public_45f5cd

PROC_DECLARE(0x45f4f0, internal_45f4f0, public_45f4f0);
extern "C" NAKED register_t __cdecl internal_45f4f0()
{
    __asm
    {
        sub esp, 0x10C
        push ebx
        mov ebx, ecx
        call public_45a9f0
        mov al, byte ptr ds : [ebx+0x538]
        test al, al
        je public_45f5cd
        mov al, byte ptr ds : [ebx+0x551]
        test al, al
        push esi
        lea esi, ds:[ebx+0x53C]
        jne public_45f5b3
        mov ecx, dword ptr ds : [public_66d8e8]
        test ecx, ecx
        jne public_45f531
        mov ecx, dword ptr ds : [public_5c7078]
        public_45f531 : nop
        lea edx, ss:[esp+0x10]
        public_45f535 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_45f535
        mov dl, byte ptr ds : [public_5cf048]
        push edi
        xor eax, eax
        or ecx, 0xFFFFFFFF
        lea edi, ss:[esp+0x14]
        repne scasb
        mov eax, dword ptr ds : [public_5cf040]
        mov ecx, dword ptr ds : [public_5cf044]
        dec edi
        mov dword ptr ds : [edi], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ds : [edi+4], ecx
        push eax
        mov byte ptr ds : [edi+8], dl
        call public_41c7e0
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        test eax, eax
        pop edi
        jne public_45f582
        mov eax, dword ptr ds : [public_5c7078]
        public_45f582 : nop
        push eax
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [public_5c6d14]
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        lea ecx, ds:[esi+0x1C]
        push ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        test eax, eax
        jne public_45f5b3
        mov byte ptr ds : [esi+0x15], 1
        public_45f5b3 : nop
        mov edx, dword ptr ds : [ebx+0x334]
        mov eax, dword ptr ds : [ebx+0x330]
        push edx
        push eax
        lea ecx, ds:[ebx+0x3C]
        push ecx
        mov ecx, esi
        call public_45e470
        pop esi
        public_45f5cd : nop
        mov ecx, ebx
        call public_57c440
        pop ebx
        add esp, 0x10C
        ret 
        UNREACHABLE_TRAP(0x45f4f0)
    }
}

#undef public_45f531
#undef public_45f535
#undef public_45f582
#undef public_45f5b3
#undef public_45f5cd
