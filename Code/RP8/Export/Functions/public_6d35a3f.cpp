#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d35a3f);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf20);

#define public_6d35a6f _public_6d35a6f
#define public_6d35a7f _public_6d35a7f
#define public_6d35aa9 _public_6d35aa9
#define public_6d35ab9 _public_6d35ab9
#define public_6d35af0 _public_6d35af0
#define public_6d35b02 _public_6d35b02
#define public_6d35b2e _public_6d35b2e
#define public_6d35b3c _public_6d35b3c

PROC_DECLARE(0x6d35a3f, internal_6d35a3f, public_6d35a3f);
extern "C" NAKED register_t __cdecl internal_6d35a3f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, ebx
        shl eax, 4
        push esi
        push eax
        call public_6d2f2a0
        mov esi, eax
        test esi, esi
        pop ecx
        je public_6d35b3c
        test edi, edi
        mov dword ptr ss : [ebp-0x14], edi
        fild dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x18], esi
        jge public_6d35a6f
        fadd dword ptr ds : [public_6d5f200]
        public_6d35a6f : nop
        test ebx, ebx
        mov dword ptr ss : [ebp-0x14], ebx
        fild dword ptr ss : [ebp-0x14]
        jge public_6d35a7f
        fadd dword ptr ds : [public_6d5f200]
        public_6d35a7f : nop
        fdivp 
        fstp dword ptr ss : [ebp-0x10]
        fnstcw word ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        or eax, 0xC00
        mov dword ptr ss : [ebp-0xC], eax
        fldcw word ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        and dword ptr ss : [ebp-4], 0
        test ebx, ebx
        mov dword ptr ds : [public_6d7291c], eax
        jbe public_6d35b2e
        public_6d35aa9 : nop
        mov eax, dword ptr ss : [ebp-4]
        fild dword ptr ss : [ebp-4]
        test eax, eax
        jge public_6d35ab9
        fadd dword ptr ds : [public_6d5f200]
        public_6d35ab9 : nop
        fmul dword ptr ss : [ebp-0x10]
        push ecx
        push ecx
        fsub dword ptr ds : [public_6d5f1fc]
        fst dword ptr ss : [ebp-8]
        fstp qword ptr ss : [esp]
        call public_6d5cf20
        pop ecx
        fstp dword ptr ss : [ebp-0xC]
        pop ecx
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        test eax, eax
        lea ecx, ds:[eax+1]
        jge public_6d35af0
        mov eax, dword ptr ss : [ebp+8]
        neg eax
        lea edx, ds:[edi-1]
        sbb eax, eax
        and eax, edx
        public_6d35af0 : nop
        cmp ecx, edi
        jb public_6d35b02
        mov ecx, dword ptr ss : [ebp+8]
        neg ecx
        sbb ecx, ecx
        lea edx, ds:[edi-1]
        not ecx
        and ecx, edx
        public_6d35b02 : nop
        fld dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi], eax
        fsub dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+8], ecx
        add esi, 0x10
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp-4], ebx
        fsubr dword ptr ds : [public_6d5e488]
        fst dword ptr ds : [esi-0xC]
        fld1 
        fsub st, st(1)
        fstp dword ptr ds : [esi-4]
        fstp st(0)
        jb public_6d35aa9
        public_6d35b2e : nop
        mov eax, dword ptr ds : [public_6d7291c]
        mov dword ptr ss : [ebp-0x14], eax
        fldcw word ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x18]
        public_6d35b3c : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d35a3f)
    }
}

#undef public_6d35a6f
#undef public_6d35a7f
#undef public_6d35aa9
#undef public_6d35ab9
#undef public_6d35af0
#undef public_6d35b02
#undef public_6d35b2e
#undef public_6d35b3c
