#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_6353510);
CLANG_FORWARD_PROC_SYMBOL(public_635df00);
CLANG_FORWARD_PROC_SYMBOL(public_635ec90);
CLANG_FORWARD_PROC_SYMBOL(public_635f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_635fd10);

#define public_635fd41 _public_635fd41
#define public_635fd6a _public_635fd6a
#define public_635fdca _public_635fdca
#define public_635fde0 _public_635fde0
#define public_635fdf7 _public_635fdf7
#define public_635fe0c _public_635fe0c

PROC_DECLARE(0x635fd10, internal_635fd10, public_635fd10);
extern "C" NAKED register_t __cdecl internal_635fd10()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        mov ebx, dword ptr ds : [eax+0x10]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx+0x28]
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        push edi
        mov edi, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [esp+0x14], edi
        jne public_635fd41
        mov ecx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ecx+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_635fd41 : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0x78]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_635fd6a
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [eax+0x110]
        cmp edx, dword ptr ds : [ecx]
        jle public_635fd6a
        call public_634d640
        public_635fd6a : nop
        mov eax, dword ptr ds : [esi+0x40]
        mov ebp, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, edi
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov edi, eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edi
        call public_6353510
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebp
        mov edx, dword ptr ds : [edi]
        add edx, edi
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ds : [ecx+0x28], 0
        movsx eax, word ptr ds : [ebx+0x4E]
        sub eax, 0
        je public_635fdf7
        dec eax
        je public_635fde0
        dec eax
        je public_635fdca
        mov dword ptr ds : [0], 0
        jmp public_635fe0c
        public_635fdca : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_635df00
        jmp public_635fe0c
        public_635fde0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push edx
        push esi
        call public_635f8c0
        jmp public_635fe0c
        public_635fdf7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push esi
        call public_635ec90
        public_635fe0c : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        dec ecx
        pop ebp
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x635fd10)
    }
}

#undef public_635fd41
#undef public_635fd6a
#undef public_635fdca
#undef public_635fde0
#undef public_635fdf7
#undef public_635fe0c
