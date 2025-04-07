#include "Common-PCH.h"


#define public_631109b _public_631109b
#define public_631109c _public_631109c
#define public_63110a7 _public_63110a7
#define public_63110e1 _public_63110e1
#define public_6311103 _public_6311103
#define public_631110b _public_631110b
#define public_6311120 _public_6311120
#define public_6311128 _public_6311128
#define public_6311131 _public_6311131
#define public_6311143 _public_6311143
#define public_631114b _public_631114b
#define public_6311157 _public_6311157
#define public_631115e _public_631115e
#define public_631116d _public_631116d
#define public_631118a _public_631118a
#define public_6311192 _public_6311192
#define public_631119b _public_631119b

PROC_DECLARE(0x6311080, internal_6311080, public_6311080);
extern "C" NAKED register_t __cdecl internal_6311080()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        xor ebx, ebx
        xor ebp, ebp
        cmp al, 0x2D
        push edi
        mov edi, 1
        je public_631109b
        cmp al, 0x2B
        jne public_631109c
        public_631109b : nop
        inc esi
        public_631109c : nop
        cmp byte ptr ds : [esi], 0x2E
        jne public_63110a7
        inc esi
        mov ebp, 1
        public_63110a7 : nop
        cmp byte ptr ds : [esi], 0x27
        jne public_63110e1
        movsx eax, byte ptr ds : [esi+1]
        inc esi
        push eax
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp eax, 0x61
        jl public_63110e1
        movsx ecx, byte ptr ds : [esi]
        push ecx
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp eax, 0x7A
        jg public_63110e1
        cmp byte ptr ds : [esi+1], 0x27
        jne public_63110e1
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_63110e1 : nop
        cmp byte ptr ds : [esi], 0x30
        jne public_6311131
        movsx edx, byte ptr ds : [esi+1]
        push edx
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp eax, 0x78
        jne public_6311131
        mov al, byte ptr ds : [esi+2]
        add esi, 2
        test al, al
        je public_6311128
        public_6311103 : nop
        cmp al, 0x30
        jl public_631110b
        cmp al, 0x39
        jle public_6311120
        public_631110b : nop
        movsx eax, al
        push eax
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp al, 0x61
        jl public_631119b
        cmp al, 0x66
        jg public_631119b
        public_6311120 : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6311103
        public_6311128 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6311131 : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x30
        jl public_631119b
        cmp al, 0x39
        jg public_631119b
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        je public_6311192
        public_6311143 : nop
        cmp al, 0x30
        jl public_631114b
        cmp al, 0x39
        jle public_631118a
        public_631114b : nop
        test edi, edi
        jne public_631115e
        cmp al, 0x2B
        je public_6311157
        cmp al, 0x2D
        jne public_631115e
        public_6311157 : nop
        mov edi, 1
        jmp public_631118a
        public_631115e : nop
        test ebp, ebp
        jne public_631116d
        cmp al, 0x2E
        jne public_631116d
        mov ebp, 1
        jmp public_631118a
        public_631116d : nop
        test ebx, ebx
        jne public_631119b
        movsx ecx, al
        push ecx
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp eax, 0x65
        jne public_631119b
        mov ebx, 1
        xor edi, edi
        public_631118a : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6311143
        public_6311192 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_631119b : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6311080)
    }
}

#undef public_631109b
#undef public_631109c
#undef public_63110a7
#undef public_63110e1
#undef public_6311103
#undef public_631110b
#undef public_6311120
#undef public_6311128
#undef public_6311131
#undef public_6311143
#undef public_631114b
#undef public_6311157
#undef public_631115e
#undef public_631116d
#undef public_631118a
#undef public_6311192
#undef public_631119b
