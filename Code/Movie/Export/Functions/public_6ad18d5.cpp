#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad40d9);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4e34);

#define public_6ad192a _public_6ad192a
#define public_6ad192d _public_6ad192d
#define public_6ad193c _public_6ad193c
#define public_6ad193f _public_6ad193f
#define public_6ad1948 _public_6ad1948
#define public_6ad1981 _public_6ad1981
#define public_6ad1984 _public_6ad1984
#define public_6ad1991 _public_6ad1991
#define public_6ad1993 _public_6ad1993
#define public_6ad19a6 _public_6ad19a6
#define public_6ad19b7 _public_6ad19b7
#define public_6ad19ba _public_6ad19ba

PROC_DECLARE(0x6ad18d5, internal_6ad18d5, public_6ad18d5);
extern "C" NAKED register_t __cdecl internal_6ad18d5()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa98 @0x6ad18da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa98
/*FIXUP push offset _public_6ad023c @0x6ad18df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov eax, dword ptr ds : [public_6ae2464]
        cmp eax, 3
        jne public_6ad1948
        push 9
        call public_6ad237a
        pop ecx
        and dword ptr ss : [ebp-4], 0
        mov esi, dword ptr ss : [ebp+8]
        push esi
        call public_6ad40d9
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        test eax, eax
        je public_6ad192a
        mov esi, dword ptr ds : [esi-4]
        sub esi, 9
        mov dword ptr ss : [ebp-0x20], esi
        jmp public_6ad192d
        public_6ad192a : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_6ad192d : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad193f
        cmp dword ptr ss : [ebp-0x1C], 0
        jmp public_6ad1991
        public_6ad193c : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_6ad193f : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad1948 : nop
        cmp eax, 2
        jne public_6ad1993
        push 9
        call public_6ad237a
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        lea eax, ss:[ebp-0x24]
        push eax
        lea eax, ss:[ebp-0x2C]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6ad4e34
        add esp, 0xC
        mov dword ptr ss : [ebp-0x28], eax
        test eax, eax
        je public_6ad1981
        movzx esi, byte ptr ds : [eax]
        shl esi, 4
        mov dword ptr ss : [ebp-0x20], esi
        jmp public_6ad1984
        public_6ad1981 : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_6ad1984 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad19ba
        cmp dword ptr ss : [ebp-0x28], 0
        public_6ad1991 : nop
        jne public_6ad19a6
        public_6ad1993 : nop
        push dword ptr ss : [ebp+8]
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada0fc]
        mov esi, eax
        public_6ad19a6 : nop
        mov eax, esi
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ad19b7 : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_6ad19ba : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad18d5)
        ASM_EXPORT_ENTRY_FIRST(0x6ad193c, public_6ad193c)
        ASM_EXPORT_ENTRY_LAST(0x6ad19b7, public_6ad19b7)
    }
}

#undef public_6ad192a
#undef public_6ad192d
#undef public_6ad193c
#undef public_6ad193f
#undef public_6ad1948
#undef public_6ad1981
#undef public_6ad1984
#undef public_6ad1991
#undef public_6ad1993
#undef public_6ad19a6
#undef public_6ad19b7
#undef public_6ad19ba

#pragma init_seg(compiler)
extern "C" void const* const public_6ad193c = __AsmFindLabelExport(&internal_6ad18d5, 0x6ad193c);
extern "C" void const* const public_6ad19b7 = __AsmFindLabelExport(&internal_6ad18d5, 0x6ad19b7);
