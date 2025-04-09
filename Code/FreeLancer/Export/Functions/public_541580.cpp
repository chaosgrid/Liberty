#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_541580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7332);
CLANG_FORWARD_PROC_SYMBOL(public_5b7338);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5415b0 _public_5415b0
#define public_5415e7 _public_5415e7
#define public_54169b _public_54169b
#define public_5416b1 _public_5416b1

PROC_DECLARE(0x541580, internal_541580, public_541580);
extern "C" NAKED register_t __cdecl internal_541580()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x4C
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5416b1
        mov ecx, dword ptr ds : [public_678a34]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_5416b1
        mov edi, edi
        public_5415b0 : nop
        mov esi, dword ptr ds : [eax+8]
        fld dword ptr ss : [ebp+8]
        fadd qword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+8]
        lea ebx, ds:[esi+0x10]
        sub esp, 8
        fstp qword ptr ds : [esi]
        mov ecx, ebx
        fld dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x1C], ebx
        fstp qword ptr ss : [esp]
        call public_5b7338
        mov eax, dword ptr ds : [public_678adc]
        test eax, eax
        jne public_5415e7
        call public_5b73e0
        mov dword ptr ds : [public_678adc], eax
        public_5415e7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+8]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ss:[esp+0x18]
        push eax
        lea eax, ds:[edi+0x2C]
        push eax
        push eax
        mov ecx, ebx
        call public_5b7332
        test al, al
        je public_54169b
        mov ecx, dword ptr ds : [edi+0xB0]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x34], ecx
        lea ebx, ds:[edi+0x2C]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], eax
        mov al, byte ptr ds : [edi+0x1A0]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ss : [esp+0x54], al
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        lea eax, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xD0]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        call dword ptr ds : [edx+4]
        public_54169b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [public_678a34]
        mov dword ptr ss : [esp+0x10], eax
        jne public_5415b0
        public_5416b1 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x541580)
    }
}

#undef public_5415b0
#undef public_5415e7
#undef public_54169b
#undef public_5416b1
