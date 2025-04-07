#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445280);
CLANG_FORWARD_PROC_SYMBOL(public_445340);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_4562e0);
CLANG_FORWARD_PROC_SYMBOL(public_4568d0);

#define public_4452a3 _public_4452a3
#define public_4452c6 _public_4452c6
#define public_4452fc _public_4452fc
#define public_44532d _public_44532d
#define public_445339 _public_445339

PROC_DECLARE(0x445280, internal_445280, public_445280);
extern "C" NAKED register_t __cdecl internal_445280()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x360]
        test ecx, ecx
        push edi
        je public_4452a3
        mov al, byte ptr ds : [esi+0x368]
        test al, al
        je public_44532d
        pop edi
        pop esi
        jmp public_4562e0
        public_4452a3 : nop
        mov edi, dword ptr ds : [esi+0x1AC]
        test edi, edi
        je public_4452c6
        mov eax, dword ptr ds : [esi+0x364]
        test eax, eax
        je public_4452c6
        push eax
        push edi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_445339
        public_4452c6 : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4452fc
        push eax
        mov ecx, offset public_66d2d0
        call public_4568d0
        lea eax, ds:[esi+0x364]
        push eax
        mov dword ptr ds : [esi+0x360], 0
        mov byte ptr ds : [esi+0x368], 0
        call dword ptr ds : [public_5c60c8]
        add esp, 4
        public_4452fc : nop
        lea ecx, ds:[esi+0x364]
        push edi
        push ecx
        call dword ptr ds : [public_5c60cc]
        add esp, 8
        push 0
        push edi
        mov ecx, esi
        call public_445340
        mov ecx, dword ptr ds : [esi+0x36C]
        test ecx, ecx
        mov dword ptr ds : [esi+0x360], eax
        jne public_445339
        test eax, eax
        je public_445339
        mov ecx, eax
        public_44532d : nop
        call public_454f80
        mov byte ptr ds : [esi+0x368], 1
        public_445339 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x445280)
    }
}

#undef public_4452a3
#undef public_4452c6
#undef public_4452fc
#undef public_44532d
#undef public_445339
