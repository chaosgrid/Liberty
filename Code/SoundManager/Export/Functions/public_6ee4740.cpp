#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee4740);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee4760 _public_6ee4760
#define public_6ee47bb _public_6ee47bb
#define public_6ee47c4 _public_6ee47c4
#define public_6ee47e8 _public_6ee47e8
#define public_6ee47ea _public_6ee47ea
#define public_6ee47f9 _public_6ee47f9

PROC_DECLARE(0x6ee4740, internal_6ee4740, public_6ee4740);
extern "C" NAKED register_t __cdecl internal_6ee4740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf04]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ee47f9
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6ee9020]
        push edi
        lea esp, ss:[esp]
        public_6ee4760 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edi, ds:[esi+8]
        call dword ptr ds : [eax+0x20]
        cmp dword ptr ss : [esp+0x14], eax
        jne public_6ee47e8
/*FIXUP push offset public_6eeaf0c @0x6ee4771*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9030]
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, ebx
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, edi
        call public_6ee11a0
        cmp dword ptr ds : [public_6eeaf48], 0x7FFFFFFF
        jge public_6ee47bb
        mov edx, dword ptr ds : [public_6eeaf3c]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [public_6eeaf48]
        inc eax
        mov dword ptr ds : [public_6eeaf3c], esi
        mov dword ptr ds : [public_6eeaf48], eax
        jmp public_6ee47c4
        public_6ee47bb : nop
        push esi
        call public_6ee8ddc
        add esp, 4
        public_6ee47c4 : nop
        mov edx, dword ptr ds : [public_6eeaf08]
        mov eax, dword ptr ds : [public_6eeaf70]
        dec edx
        push eax
        mov dword ptr ds : [public_6eeaf08], edx
        mov esi, ebx
        call ebp
/*FIXUP push offset public_6eeaf0c @0x6ee47db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        jmp public_6ee47ea
        public_6ee47e8 : nop
        mov esi, dword ptr ds : [esi]
        public_6ee47ea : nop
        cmp esi, dword ptr ds : [public_6eeaf04]
        jne public_6ee4760
        pop edi
        pop ebp
        pop ebx
        public_6ee47f9 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee4740)
    }
}

#undef public_6ee4760
#undef public_6ee47bb
#undef public_6ee47c4
#undef public_6ee47e8
#undef public_6ee47ea
#undef public_6ee47f9
