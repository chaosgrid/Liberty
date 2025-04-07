#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f971fc _public_6f971fc
#define public_6f97204 _public_6f97204
#define public_6f9720f _public_6f9720f
#define public_6f97217 _public_6f97217
#define public_6f97222 _public_6f97222
#define public_6f97230 _public_6f97230
#define public_6f9724a _public_6f9724a
#define public_6f97263 _public_6f97263
#define public_6f9726b _public_6f9726b
#define public_6f97273 _public_6f97273
#define public_6f9727b _public_6f9727b
#define public_6f97283 _public_6f97283
#define public_6f97293 _public_6f97293
#define public_6f9729b _public_6f9729b
#define public_6f972a2 _public_6f972a2
#define public_6f972b0 _public_6f972b0
#define public_6f972c1 _public_6f972c1
#define public_6f972d9 _public_6f972d9
#define public_6f972f4 _public_6f972f4
#define public_6f9730d _public_6f9730d
#define public_6f97321 _public_6f97321
#define public_6f97329 _public_6f97329
#define public_6f9732f _public_6f9732f
#define public_6f97358 _public_6f97358

PROC_DECLARE(0x6f971e0, internal_6f971e0, public_6f971e0);
extern "C" NAKED register_t __cdecl internal_6f971e0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        je public_6f97358
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f971fc
        xor esi, esi
        jmp public_6f97204
        public_6f971fc : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 2
        public_6f97204 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6f9720f
        xor ecx, ecx
        jmp public_6f97217
        public_6f9720f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6f97217 : nop
        cmp esi, ecx
        ja public_6f97263
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        je public_6f97230
        public_6f97222 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f97222
        public_6f97230 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f9724a
        mov eax, dword ptr ds : [ebx+4]
        xor ebp, ebp
        lea ecx, ds:[eax+ebp*4]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6f9724a : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, dword ptr ds : [ebx+4]
        sar ebp, 2
        lea ecx, ds:[eax+ebp*4]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6f97263 : nop
        test eax, eax
        jne public_6f9726b
        xor esi, esi
        jmp public_6f97273
        public_6f9726b : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 2
        public_6f97273 : nop
        test edx, edx
        jne public_6f9727b
        xor ecx, ecx
        jmp public_6f97283
        public_6f9727b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6f97283 : nop
        cmp esi, ecx
        ja public_6f9730d
        test edx, edx
        jne public_6f97293
        xor ecx, ecx
        jmp public_6f9729b
        public_6f97293 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_6f9729b : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f972b0
        public_6f972a2 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f972a2
        public_6f972b0 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp ecx, eax
        push edi
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov esi, ecx
        je public_6f972d9
        public_6f972c1 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6f972c1
        public_6f972d9 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        pop edi
        jne public_6f972f4
        mov edx, dword ptr ds : [ebx+4]
        xor ebp, ebp
        lea eax, ds:[edx+ebp*4]
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        public_6f972f4 : nop
        mov ebp, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ebx+4]
        sub ebp, eax
        sar ebp, 2
        lea eax, ds:[edx+ebp*4]
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        public_6f9730d : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_6f97321
        xor eax, eax
        jmp public_6f97329
        public_6f97321 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        public_6f97329 : nop
        test eax, eax
        jge public_6f9732f
        xor eax, eax
        public_6f9732f : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_6eed270
        mov dword ptr ds : [ebx+0xC], eax
        mov dword ptr ds : [ebx+8], eax
        public_6f97358 : nop
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f971e0)
    }
}

#undef public_6f971fc
#undef public_6f97204
#undef public_6f9720f
#undef public_6f97217
#undef public_6f97222
#undef public_6f97230
#undef public_6f9724a
#undef public_6f97263
#undef public_6f9726b
#undef public_6f97273
#undef public_6f9727b
#undef public_6f97283
#undef public_6f97293
#undef public_6f9729b
#undef public_6f972a2
#undef public_6f972b0
#undef public_6f972c1
#undef public_6f972d9
#undef public_6f972f4
#undef public_6f9730d
#undef public_6f97321
#undef public_6f97329
#undef public_6f9732f
#undef public_6f97358
