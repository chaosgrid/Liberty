#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_6353510);
CLANG_FORWARD_PROC_SYMBOL(public_6353560);
CLANG_FORWARD_PROC_SYMBOL(public_6363430);
CLANG_FORWARD_PROC_SYMBOL(public_63645d0);
CLANG_FORWARD_PROC_SYMBOL(public_6364ce0);

#define public_6353590 _public_6353590
#define public_63535b9 _public_63535b9
#define public_635361b _public_635361b
#define public_6353631 _public_6353631
#define public_6353647 _public_6353647
#define public_635365b _public_635365b

PROC_DECLARE(0x6353560, internal_6353560, public_6353560);
extern "C" NAKED register_t __cdecl internal_6353560()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [edi+0x28]
        add edi, 0x18
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_6353590
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_6353590 : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_63535b9
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_63535b9
        call public_634d640
        public_63535b9 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov esi, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], edi
        mov ebp, dword ptr ds : [esi+0x48]
        mov ebx, dword ptr ds : [esi+0x44]
        add esi, 0x34
        mov eax, ebp
        and eax, 0xFFFFFFF0
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        sub eax, edx
        mov edi, eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edi
        call public_6353510
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov eax, dword ptr ds : [edi]
        add eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x2C], esi
        movsx eax, word ptr ds : [esi+0x1A]
        sub eax, 0
        je public_6353647
        dec eax
        je public_6353631
        dec eax
        je public_635361b
        xor eax, eax
        mov dword ptr ds : [0], eax
        jmp public_635365b
        public_635361b : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        call public_6363430
        jmp public_635365b
        public_6353631 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        call public_6364ce0
        jmp public_635365b
        public_6353647 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        call public_63645d0
        public_635365b : nop
        mov ecx, dword ptr ss : [esp+0x24]
        dec dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        pop esi
        dec edx
        pop ebp
        mov dword ptr ds : [ecx+4], edx
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6353560)
    }
}

#undef public_6353590
#undef public_63535b9
#undef public_635361b
#undef public_6353631
#undef public_6353647
#undef public_635365b
