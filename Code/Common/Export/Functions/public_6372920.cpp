#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6372920);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);

#define public_637295d _public_637295d
#define public_637299a _public_637299a
#define public_63729cf _public_63729cf
#define public_6372a02 _public_6372a02

PROC_DECLARE(0x6372920, internal_6372920, public_6372920);
extern "C" NAKED register_t __cdecl internal_6372920()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx+0x40]
        push esi
        xor esi, esi
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0xFFEFFFFF
        je public_63729cf
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_63729cf
        public_637295d : nop
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        push esi
        call public_637fd60
        fld qword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_658ba70]
        fcomp qword ptr ss : [esp+0x1C]
        add esp, 0xC
        inc eax
        mov dword ptr ds : [public_658ba70], eax
        fnstsw ax
        test ah, 0x41
        jne public_637299a
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        public_637299a : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_637295d
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_63729cf
        mov eax, dword ptr ds : [ebx+0x40]
        lea edi, ds:[ebx+0x40]
        push esi
        push eax
        call public_636e400
        push esi
        push edi
        call public_636e1b0
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx], ecx
        add esp, 0x10
        mov dword ptr ds : [ebx+4], edx
        public_63729cf : nop
        and dword ptr ds : [ebx+0x50], 0xFFFDFFFF
        cmp dword ptr ds : [public_658b078], 3
        jl public_6372a02
        mov eax, dword ptr ds : [ebx+0x4C]
        push eax
        push esi
        call public_6370570
        mov ecx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63f0740 @0x63729f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0740
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6372a02 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6372920)
    }
}

#undef public_637295d
#undef public_637299a
#undef public_63729cf
#undef public_6372a02
