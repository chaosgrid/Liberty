#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7026);

#define public_6ad70b0 _public_6ad70b0
#define public_6ad710e _public_6ad710e
#define public_6ad711e _public_6ad711e
#define public_6ad7178 _public_6ad7178
#define public_6ad7185 _public_6ad7185
#define public_6ad71c0 _public_6ad71c0
#define public_6ad71ca _public_6ad71ca
#define public_6ad71fd _public_6ad71fd
#define public_6ad7228 _public_6ad7228

PROC_DECLARE(0x6ad7026, internal_6ad7026, public_6ad7026);
extern "C" NAKED register_t __cdecl internal_6ad7026()
{
    __asm
    {
        push eax
        push ebx
        push ecx
        mov eax, dword ptr ss : [esp+0x16]
        xor eax, 0x700
        test eax, 0x700
        jne public_6ad71c0
        shr eax, 0xB
        and eax, 0xF
        cmp byte ptr ds : [eax+public_6ae00ac], 0
        je public_6ad71c0
        mov eax, dword ptr ss : [esp+0x16]
        and eax, 0x7FFF0000
        cmp eax, 0x7FFF0000
        je public_6ad71c0
        mov eax, dword ptr ss : [esp+0x2E]
        and eax, 0x7FFF0000
        je public_6ad71c0
        cmp eax, 0x7FFF0000
        je public_6ad71c0
        mov eax, dword ptr ss : [esp+0x2C]
        add eax, eax
        jne public_6ad71c0
        mov eax, dword ptr ss : [esp+0x14]
        add eax, eax
        jne public_6ad71c0
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x7FFF
        add eax, 0x3F
        mov ebx, dword ptr ss : [esp+0x30]
        and ebx, 0x7FFF
        sub ebx, eax
        ja public_6ad710e
        public_6ad70b0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x7FFF
        add eax, 0xA
        mov ebx, dword ptr ss : [esp+0x30]
        and ebx, 0x7FFF
        sub ebx, eax
        js public_6ad71c0
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
        jmp public_6ad70b0
        public_6ad710e : nop
        test edx, 2
        jne public_6ad711e
        fld tbyte ptr ss : [esp+0x10]
        fstp tbyte ptr ss : [esp+0x1C]
        public_6ad711e : nop
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
        public_6ad7178 : nop
        fcom 
        fnstsw ax
        and eax, 0x100
        jne public_6ad7185
        fsub st, st(1)
        public_6ad7185 : nop
        fxch 
        fmul qword ptr ds : [public_6ae00dc]
        fxch 
        sub ecx, 1
        jne public_6ad7178
        mov ebx, dword ptr ss : [esp+0x30]
        fstp tbyte ptr ss : [esp+0x28]
        fstp st(0)
        fld tbyte ptr ss : [esp+0x1C]
        fld tbyte ptr ds : [public_6ae00e4]
        fprem 
        fstp st(0)
        fld tbyte ptr ss : [esp+0x28]
        fldcw word ptr ss : [esp+0x34]
        and ebx, 0x8000
        je public_6ad71ca
        fchs 
        jmp public_6ad71ca
        public_6ad71c0 : nop
        fld tbyte ptr ss : [esp+0x10]
        fld tbyte ptr ss : [esp+0x28]
        fprem 
        public_6ad71ca : nop
        test edx, 3
        je public_6ad7228
        fnstsw word ptr ss : [esp+0x3C]
        test edx, 1
        je public_6ad71fd
        fnstcw word ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        or eax, 0x300
        mov dword ptr ss : [esp+0x38], eax
        fldcw word ptr ss : [esp+0x38]
        fmul qword ptr ds : [public_6ae00cc]
        fldcw word ptr ss : [esp+0x34]
        public_6ad71fd : nop
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
        public_6ad7228 : nop
        pop ecx
        pop ebx
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ad7026)
    }
}

#undef public_6ad70b0
#undef public_6ad710e
#undef public_6ad711e
#undef public_6ad7178
#undef public_6ad7185
#undef public_6ad71c0
#undef public_6ad71ca
#undef public_6ad71fd
#undef public_6ad7228
