#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddb90);
CLANG_FORWARD_PROC_SYMBOL(public_65defd3);
CLANG_FORWARD_PROC_SYMBOL(public_65df291);

#define public_65df2bc _public_65df2bc
#define public_65df2dc _public_65df2dc
#define public_65df2e7 _public_65df2e7
#define public_65df2eb _public_65df2eb
#define public_65df2ef _public_65df2ef
#define public_65df312 _public_65df312
#define public_65df31b _public_65df31b
#define public_65df34d _public_65df34d
#define public_65df35a _public_65df35a

PROC_DECLARE(0x65df291, internal_65df291, public_65df291);
extern "C" NAKED register_t __cdecl internal_65df291()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr ds : [public_65e63e8], 0
        push ebx
        jne public_65df2bc
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x61
        jl public_65df35a
        cmp eax, 0x7A
        jg public_65df35a
        sub eax, 0x20
        jmp public_65df35a
        public_65df2bc : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp ebx, 0x100
        jge public_65df2ef
        cmp dword ptr ds : [public_65e5be0], 1
        jle public_65df2dc
        push 2
        push ebx
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65df2e7
        public_65df2dc : nop
        mov eax, dword ptr ds : [public_65e59d0]
        mov al, byte ptr ds : [eax+ebx*2]
        and eax, 2
        public_65df2e7 : nop
        test eax, eax
        jne public_65df2ef
        public_65df2eb : nop
        mov eax, ebx
        jmp public_65df35a
        public_65df2ef : nop
        mov edx, dword ptr ds : [public_65e59d0]
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr ds : [edx+ecx*2+1], 0x80
        je public_65df312
        and byte ptr ss : [ebp+0xA], 0
        mov byte ptr ss : [ebp+8], al
        mov byte ptr ss : [ebp+9], bl
        push 2
        jmp public_65df31b
        public_65df312 : nop
        and byte ptr ss : [ebp+9], 0
        mov byte ptr ss : [ebp+8], bl
        push 1
        public_65df31b : nop
        pop eax
        lea ecx, ss:[ebp-4]
        push 1
        push 0
        push 3
        push ecx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        push 0x200
        push dword ptr ds : [public_65e63e8]
        call public_65defd3
        add esp, 0x20
        test eax, eax
        je public_65df2eb
        cmp eax, 1
        jne public_65df34d
        movzx eax, byte ptr ss : [ebp-4]
        jmp public_65df35a
        public_65df34d : nop
        movzx eax, byte ptr ss : [ebp-3]
        movzx ecx, byte ptr ss : [ebp-4]
        shl eax, 8
        or eax, ecx
        public_65df35a : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65df291)
    }
}

#undef public_65df2bc
#undef public_65df2dc
#undef public_65df2e7
#undef public_65df2eb
#undef public_65df2ef
#undef public_65df312
#undef public_65df31b
#undef public_65df34d
#undef public_65df35a
