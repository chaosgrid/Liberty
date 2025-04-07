#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad72de);

#define public_6ad7368 _public_6ad7368
#define public_6ad73c6 _public_6ad73c6
#define public_6ad73d6 _public_6ad73d6
#define public_6ad7430 _public_6ad7430
#define public_6ad743d _public_6ad743d
#define public_6ad7478 _public_6ad7478
#define public_6ad7482 _public_6ad7482
#define public_6ad74b5 _public_6ad74b5
#define public_6ad74e0 _public_6ad74e0

PROC_DECLARE(0x6ad72de, internal_6ad72de, public_6ad72de);
extern "C" NAKED register_t __cdecl internal_6ad72de()
{
    __asm
    {
        push eax
        push ebx
        push ecx
        mov eax, dword ptr ss : [esp+0x16]
        xor eax, 0x700
        test eax, 0x700
        jne public_6ad7478
        shr eax, 0xB
        and eax, 0xF
        cmp byte ptr ds : [eax+public_6ae00ac], 0
        je public_6ad7478
        mov eax, dword ptr ss : [esp+0x16]
        and eax, 0x7FFF0000
        cmp eax, 0x7FFF0000
        je public_6ad7478
        mov eax, dword ptr ss : [esp+0x2E]
        and eax, 0x7FFF0000
        je public_6ad7478
        cmp eax, 0x7FFF0000
        je public_6ad7478
        mov eax, dword ptr ss : [esp+0x2C]
        add eax, eax
        jne public_6ad7478
        mov eax, dword ptr ss : [esp+0x14]
        add eax, eax
        jne public_6ad7478
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x7FFF
        add eax, 0x3F
        mov ebx, dword ptr ss : [esp+0x30]
        and ebx, 0x7FFF
        sub ebx, eax
        ja public_6ad73c6
        public_6ad7368 : nop
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x7FFF
        add eax, 0xA
        mov ebx, dword ptr ss : [esp+0x30]
        and ebx, 0x7FFF
        sub ebx, eax
        js public_6ad7478
        fld tbyte ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x30]
        and ebx, 0x7FFF
        mov ecx, ebx
        sub ebx, eax
        and ebx, 7
        or ebx, 4
        sub ecx, ebx
        mov ebx, eax
        and ebx, 0x8000
        or ecx, ebx
        mov dword ptr ss : [esp+0x18], ecx
        fld tbyte ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fxch 
        fprem 
        fstp tbyte ptr ss : [esp+0x28]
        fstp st(0)
        jmp public_6ad7368
        public_6ad73c6 : nop
        test ebx, 2
        jne public_6ad73d6
        fld tbyte ptr ss : [esp+0x10]
        fstp tbyte ptr ss : [esp+0x1C]
        public_6ad73d6 : nop
        fnstcw word ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        or eax, 0x33F
        mov dword ptr ss : [esp+0x38], eax
        fldcw word ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x7FFF
        mov ebx, dword ptr ss : [esp+0x30]
        and ebx, 0x7FFF
        sub ebx, eax
        and ebx, 0x3F
        or ebx, 0x20
        add ebx, 1
        mov ecx, ebx
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x30]
        and ebx, 0x7FFF
        and eax, 0x8000
        or ebx, eax
        mov dword ptr ss : [esp+0x18], ebx
        fld tbyte ptr ss : [esp+0x10]
        fabs 
        fld tbyte ptr ss : [esp+0x28]
        fabs 
        public_6ad7430 : nop
        fcom 
        fnstsw ax
        and eax, 0x100
        jne public_6ad743d
        fsub st, st(1)
        public_6ad743d : nop
        fxch 
        fmul qword ptr ds : [public_6ae00dc]
        fxch 
        sub ecx, 1
        jne public_6ad7430
        mov ebx, dword ptr ss : [esp+0x30]
        fstp tbyte ptr ss : [esp+0x28]
        fstp st(0)
        fld tbyte ptr ss : [esp+0x1C]
        fld tbyte ptr ds : [public_6ae00e4]
        fprem1 
        fstp st(0)
        fld tbyte ptr ss : [esp+0x28]
        fldcw word ptr ss : [esp+0x34]
        and ebx, 0x8000
        je public_6ad7482
        fchs 
        jmp public_6ad7482
        public_6ad7478 : nop
        fld tbyte ptr ss : [esp+0x10]
        fld tbyte ptr ss : [esp+0x28]
        fprem1 
        public_6ad7482 : nop
        test edx, 3
        je public_6ad74e0
        fnstsw word ptr ss : [esp+0x3C]
        test edx, 1
        je public_6ad74b5
        fnstcw word ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        or eax, 0x300
        mov dword ptr ss : [esp+0x38], eax
        fldcw word ptr ss : [esp+0x38]
        fmul qword ptr ds : [public_6ae00cc]
        fldcw word ptr ss : [esp+0x34]
        public_6ad74b5 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        fxch 
        fstp st(0)
        fld tbyte ptr ss : [esp+0x1C]
        fxch 
        and eax, 0x4300
        sub esp, 0x1C
        fnstenv ss:[esp]
        and dword ptr ss : [esp+4], 0xBCFF
        or dword ptr ss : [esp+4], eax
        fldenv ss:[esp]
        add esp, 0x1C
        public_6ad74e0 : nop
        pop ecx
        pop ebx
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ad72de)
    }
}

#undef public_6ad7368
#undef public_6ad73c6
#undef public_6ad73d6
#undef public_6ad7430
#undef public_6ad743d
#undef public_6ad7478
#undef public_6ad7482
#undef public_6ad74b5
#undef public_6ad74e0
