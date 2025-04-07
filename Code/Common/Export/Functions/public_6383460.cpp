#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6383460);

#define public_638347b _public_638347b
#define public_6383490 _public_6383490
#define public_63834b1 _public_63834b1
#define public_63834c7 _public_63834c7
#define public_63834cd _public_63834cd
#define public_63834cf _public_63834cf
#define public_63834f4 _public_63834f4
#define public_638350a _public_638350a
#define public_6383510 _public_6383510
#define public_6383512 _public_6383512
#define public_6383526 _public_6383526

PROC_DECLARE(0x6383460, internal_6383460, public_6383460);
extern "C" NAKED register_t __cdecl internal_6383460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        test edx, edx
        push edi
        mov edi, 1
        je public_638347b
        mov dword ptr ds : [edx], 0
        mov dword ptr ds : [edx+4], 0
        public_638347b : nop
        mov eax, dword ptr ds : [public_658b24c]
        xor ecx, ecx
        test eax, eax
        jle public_6383526
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6383490 : nop
        mov eax, dword ptr ds : [public_658b67c]
        fld qword ptr ds : [eax+ecx*8]
        fcom qword ptr ds : [public_63a5930]
        fnstsw ax
        test ah, 0x41
        jne public_63834cd
        fcom qword ptr ds : [esi+ecx*8]
        fnstsw ax
        test ah, 0x41
        jne public_63834b1
        xor edi, edi
        public_63834b1 : nop
        test edx, edx
        je public_63834cd
        fsub qword ptr ds : [esi+ecx*8]
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        je public_63834c7
        fchs 
        public_63834c7 : nop
        fadd qword ptr ds : [edx]
        fstp qword ptr ds : [edx]
        jmp public_63834cf
        public_63834cd : nop
        fstp st(0)
        public_63834cf : nop
        mov ebx, dword ptr ds : [public_658b678]
        fld qword ptr ds : [ebx+ecx*8]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6383512
        fld qword ptr ds : [ebx+ecx*8]
        fcom qword ptr ds : [esi+ecx*8]
        fnstsw ax
        test ah, 1
        je public_63834f4
        xor edi, edi
        public_63834f4 : nop
        test edx, edx
        je public_6383510
        fsub qword ptr ds : [esi+ecx*8]
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        je public_638350a
        fchs 
        public_638350a : nop
        fadd qword ptr ds : [edx]
        fstp qword ptr ds : [edx]
        jmp public_6383512
        public_6383510 : nop
        fstp st(0)
        public_6383512 : nop
        mov eax, dword ptr ds : [public_658b24c]
        inc ecx
        cmp ecx, eax
        jl public_6383490
        pop esi
        pop ebx
        mov eax, edi
        pop edi
        ret 
        public_6383526 : nop
        mov eax, edi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6383460)
    }
}

#undef public_638347b
#undef public_6383490
#undef public_63834b1
#undef public_63834c7
#undef public_63834cd
#undef public_63834cf
#undef public_63834f4
#undef public_638350a
#undef public_6383510
#undef public_6383512
#undef public_6383526
