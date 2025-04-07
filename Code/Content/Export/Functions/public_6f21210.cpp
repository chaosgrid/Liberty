#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21210);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f21279 _public_6f21279
#define public_6f2128d _public_6f2128d
#define public_6f21293 _public_6f21293
#define public_6f212a1 _public_6f212a1
#define public_6f212e2 _public_6f212e2
#define public_6f212fb _public_6f212fb
#define public_6f2130e _public_6f2130e
#define public_6f21319 _public_6f21319
#define public_6f2131c _public_6f2131c
#define public_6f21321 _public_6f21321
#define public_6f2134a _public_6f2134a
#define public_6f21363 _public_6f21363
#define public_6f21376 _public_6f21376
#define public_6f21380 _public_6f21380
#define public_6f213a3 _public_6f213a3
#define public_6f213bb _public_6f213bb
#define public_6f213ce _public_6f213ce
#define public_6f213db _public_6f213db
#define public_6f213dd _public_6f213dd
#define public_6f213e3 _public_6f213e3
#define public_6f2140c _public_6f2140c
#define public_6f2141f _public_6f2141f
#define public_6f2142a _public_6f2142a
#define public_6f2142d _public_6f2142d
#define public_6f2142f _public_6f2142f
#define public_6f21432 _public_6f21432
#define public_6f2143e _public_6f2143e

PROC_DECLARE(0x6f21210, internal_6f21210, public_6f21210);
extern "C" NAKED register_t __cdecl internal_6f21210()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f305b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f21279
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f21279
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6f21279
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f21293
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f21293
        public_6f21279 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f2128d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f21293
        public_6f2128d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f21293
        mov dword ptr ds : [eax], ebx
        public_6f21293 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f2143e
        public_6f212a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f2143e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f21380
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f212e2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f21432
        public_6f212e2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f21321
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f212fb
        mov dword ptr ds : [edx+4], eax
        public_6f212fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2130e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2131c
        public_6f2130e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f21319
        mov dword ptr ds : [edx], ecx
        jmp public_6f2131c
        public_6f21319 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2131c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f21321 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2134a
        mov dword ptr ds : [edi+4], ecx
        public_6f2134a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f21363
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2142f
        public_6f21363 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f21376
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2142f
        public_6f21376 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2142f
        public_6f21380 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f213a3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f21432
        public_6f213a3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f213e3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f213bb
        mov dword ptr ds : [edx+4], eax
        public_6f213bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f213ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f213dd
        public_6f213ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f213db
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f213dd
        public_6f213db : nop
        mov dword ptr ds : [edx], ecx
        public_6f213dd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f213e3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2140c
        mov dword ptr ds : [edi+4], ecx
        public_6f2140c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f2141f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f2142d
        public_6f2141f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f2142a
        mov dword ptr ds : [edi], edx
        jmp public_6f2142d
        public_6f2142a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f2142d : nop
        mov dword ptr ds : [edx], ecx
        public_6f2142f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f21432 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f212a1
        public_6f2143e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f21210)
    }
}

#undef public_6f21279
#undef public_6f2128d
#undef public_6f21293
#undef public_6f212a1
#undef public_6f212e2
#undef public_6f212fb
#undef public_6f2130e
#undef public_6f21319
#undef public_6f2131c
#undef public_6f21321
#undef public_6f2134a
#undef public_6f21363
#undef public_6f21376
#undef public_6f21380
#undef public_6f213a3
#undef public_6f213bb
#undef public_6f213ce
#undef public_6f213db
#undef public_6f213dd
#undef public_6f213e3
#undef public_6f2140c
#undef public_6f2141f
#undef public_6f2142a
#undef public_6f2142d
#undef public_6f2142f
#undef public_6f21432
#undef public_6f2143e
