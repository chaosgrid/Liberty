#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63840b0);
CLANG_FORWARD_PROC_SYMBOL(public_6384780);

#define public_63847b0 _public_63847b0
#define public_63847b4 _public_63847b4
#define public_63847c4 _public_63847c4
#define public_63847cf _public_63847cf
#define public_63847e1 _public_63847e1
#define public_63847ef _public_63847ef
#define public_6384808 _public_6384808
#define public_638480c _public_638480c
#define public_6384820 _public_6384820
#define public_638482f _public_638482f

PROC_DECLARE(0x6384780, internal_6384780, public_6384780);
extern "C" NAKED register_t __cdecl internal_6384780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        push ebp
        push esi
        xor esi, esi
        cmp eax, 1
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        jl public_63847b0
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
        push edi
        push ebx
/*FIXUP push offset public_63f7408 @0x63847a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7408
        push eax
        call public_63840b0
        add esp, 0x14
        jmp public_63847b4
        public_63847b0 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        public_63847b4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov ebp, dword ptr ss : [esp+0x14]
        je public_638482f
        mov dword ptr ss : [esp+0x14], eax
        public_63847c4 : nop
        test edi, edi
        mov ecx, dword ptr ds : [ebx+edi*4]
        jle public_6384808
        mov dword ptr ss : [esp+0x1C], edi
        public_63847cf : nop
        test edi, edi
        fld qword ptr ds : [public_63a58b0]
        mov esi, ebp
        je public_63847ef
        mov eax, dword ptr ds : [ebx]
        sub eax, ebp
        lea edx, ds:[edi]
        public_63847e1 : nop
        fld qword ptr ds : [eax+esi]
        add esi, 8
        dec edx
        fmul qword ptr ds : [esi-8]
        faddp 
        jne public_63847e1
        public_63847ef : nop
        mov eax, dword ptr ss : [esp+0x1C]
        fstp qword ptr ds : [ecx]
        add ecx, 8
        add ebx, 4
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_63847cf
        mov ebx, dword ptr ss : [esp+0x20]
        test edi, edi
        public_6384808 : nop
        je public_6384820
        lea eax, ds:[edi]
        public_638480c : nop
        mov edx, dword ptr ds : [ecx-8]
        sub ecx, 8
        sub esi, 8
        dec eax
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edx
        jne public_638480c
        public_6384820 : nop
        mov eax, dword ptr ss : [esp+0x14]
        dec eax
        lea ebp, ss:[ebp+edi*8]
        mov dword ptr ss : [esp+0x14], eax
        jne public_63847c4
        public_638482f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6384780)
    }
}

#undef public_63847b0
#undef public_63847b4
#undef public_63847c4
#undef public_63847cf
#undef public_63847e1
#undef public_63847ef
#undef public_6384808
#undef public_638480c
#undef public_6384820
#undef public_638482f
