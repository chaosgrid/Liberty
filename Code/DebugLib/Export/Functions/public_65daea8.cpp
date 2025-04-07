#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65daea8);

#define public_65daed3 _public_65daed3
#define public_65daedc _public_65daedc
#define public_65daf16 _public_65daf16
#define public_65daf20 _public_65daf20
#define public_65daf34 _public_65daf34
#define public_65daf3a _public_65daf3a
#define public_65daf43 _public_65daf43
#define public_65daf54 _public_65daf54
#define public_65daf5b _public_65daf5b
#define public_65daf5e _public_65daf5e
#define public_65daf8f _public_65daf8f
#define public_65dafc7 _public_65dafc7
#define public_65dafd8 _public_65dafd8
#define public_65dafde _public_65dafde
#define public_65dafe4 _public_65dafe4

PROC_DECLARE(0x65daea8, internal_65daea8, public_65daea8);
extern "C" NAKED register_t __cdecl internal_65daea8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+0xC], 1
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        push esi
        jne public_65daf43
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], ebx
        and dword ptr ss : [ebp+0x10], 3
        mov esi, eax
        jne public_65daed3
        shl esi, 2
        mov eax, dword ptr ds : [esi+public_65e5bec]
        jmp public_65daedc
        public_65daed3 : nop
        shl esi, 2
        mov eax, dword ptr ds : [esi+public_65e5c20]
        public_65daedc : nop
        mov edx, ebx
        lea ecx, ds:[eax+1]
        imul edx, 0x16D
        lea eax, ds:[ebx-1]
        push edi
        sar eax, 2
        mov edi, ecx
        push 7
        add edi, eax
        lea eax, ds:[edx+edi-0x63DB]
        pop edi
        cdq 
        idiv edi
        mov eax, dword ptr ss : [ebp+0x18]
        pop edi
        cmp edx, dword ptr ss : [ebp+0x1C]
        jg public_65daf16
        imul eax, 7
        sub eax, edx
        add eax, dword ptr ss : [ebp+0x1C]
        lea ecx, ds:[ecx+eax-7]
        jmp public_65daf20
        public_65daf16 : nop
        imul eax, 7
        sub eax, edx
        add eax, dword ptr ss : [ebp+0x1C]
        add ecx, eax
        public_65daf20 : nop
        cmp dword ptr ss : [ebp+0x18], 5
        jne public_65daf5e
        cmp dword ptr ss : [ebp+0x10], 0
        jne public_65daf34
        mov esi, dword ptr ds : [esi+public_65e5bf0]
        jmp public_65daf3a
        public_65daf34 : nop
        mov esi, dword ptr ds : [esi+public_65e5c24]
        public_65daf3a : nop
        cmp ecx, esi
        jle public_65daf5e
        sub ecx, 7
        jmp public_65daf5e
        public_65daf43 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test bl, 3
        jne public_65daf54
        mov ecx, dword ptr ds : [eax*4+public_65e5bec]
        jmp public_65daf5b
        public_65daf54 : nop
        mov ecx, dword ptr ds : [eax*4+public_65e5c20]
        public_65daf5b : nop
        add ecx, dword ptr ss : [ebp+0x20]
        public_65daf5e : nop
        cmp dword ptr ss : [ebp+8], 1
        jne public_65daf8f
        mov eax, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [public_65e34f4], ecx
        imul eax, 0x3C
        add eax, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [public_65e34f0], ebx
        imul eax, 0x3C
        add eax, dword ptr ss : [ebp+0x2C]
        imul eax, 0x3E8
        add eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [public_65e34f8], eax
        jmp public_65dafe4
        public_65daf8f : nop
        mov eax, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [public_65e3504], ecx
        imul eax, 0x3C
        add eax, dword ptr ss : [ebp+0x28]
        imul eax, 0x3C
        add eax, dword ptr ds : [public_65e3464]
        add eax, dword ptr ss : [ebp+0x2C]
        imul eax, 0x3E8
        add eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [public_65e3508], eax
        jns public_65dafc7
        add eax, 0x5265C00
        dec ecx
        mov dword ptr ds : [public_65e3508], eax
        jmp public_65dafd8
        public_65dafc7 : nop
        mov edx, 0x5265C00
        cmp eax, edx
        jl public_65dafde
        sub eax, edx
        inc ecx
        mov dword ptr ds : [public_65e3508], eax
        public_65dafd8 : nop
        mov dword ptr ds : [public_65e3504], ecx
        public_65dafde : nop
        mov dword ptr ds : [public_65e3500], ebx
        public_65dafe4 : nop
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65daea8)
    }
}

#undef public_65daed3
#undef public_65daedc
#undef public_65daf16
#undef public_65daf20
#undef public_65daf34
#undef public_65daf3a
#undef public_65daf43
#undef public_65daf54
#undef public_65daf5b
#undef public_65daf5e
#undef public_65daf8f
#undef public_65dafc7
#undef public_65dafd8
#undef public_65dafde
#undef public_65dafe4
