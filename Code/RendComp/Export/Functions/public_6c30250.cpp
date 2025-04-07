#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c30250);
CLANG_FORWARD_PROC_SYMBOL(public_6c307f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c302b9 _public_6c302b9
#define public_6c302cd _public_6c302cd
#define public_6c302d3 _public_6c302d3
#define public_6c302e1 _public_6c302e1
#define public_6c30322 _public_6c30322
#define public_6c3033b _public_6c3033b
#define public_6c3034e _public_6c3034e
#define public_6c30359 _public_6c30359
#define public_6c3035c _public_6c3035c
#define public_6c30361 _public_6c30361
#define public_6c3038a _public_6c3038a
#define public_6c303a3 _public_6c303a3
#define public_6c303b6 _public_6c303b6
#define public_6c303c0 _public_6c303c0
#define public_6c303e3 _public_6c303e3
#define public_6c303fb _public_6c303fb
#define public_6c3040e _public_6c3040e
#define public_6c3041b _public_6c3041b
#define public_6c3041d _public_6c3041d
#define public_6c30423 _public_6c30423
#define public_6c3044c _public_6c3044c
#define public_6c3045f _public_6c3045f
#define public_6c3046a _public_6c3046a
#define public_6c3046d _public_6c3046d
#define public_6c3046f _public_6c3046f
#define public_6c30472 _public_6c30472
#define public_6c3047e _public_6c3047e

PROC_DECLARE(0x6c30250, internal_6c30250, public_6c30250);
extern "C" NAKED register_t __cdecl internal_6c30250()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6c34eac
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
        call public_6c307f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6c302b9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6c302b9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6c302b9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6c302d3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6c302d3
        public_6c302b9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6c302cd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6c302d3
        public_6c302cd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6c302d3
        mov dword ptr ds : [eax], ebx
        public_6c302d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6c3047e
        public_6c302e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c3047e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6c303c0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6c30322
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6c30472
        public_6c30322 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6c30361
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c3033b
        mov dword ptr ds : [edx+4], eax
        public_6c3033b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c3034e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c3035c
        public_6c3034e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6c30359
        mov dword ptr ds : [edx], ecx
        jmp public_6c3035c
        public_6c30359 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c3035c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c30361 : nop
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
        je public_6c3038a
        mov dword ptr ds : [edi+4], ecx
        public_6c3038a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c303a3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c3046f
        public_6c303a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c303b6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c3046f
        public_6c303b6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c3046f
        public_6c303c0 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6c303e3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6c30472
        public_6c303e3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6c30423
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c303fb
        mov dword ptr ds : [edx+4], eax
        public_6c303fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c3040e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c3041d
        public_6c3040e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6c3041b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c3041d
        public_6c3041b : nop
        mov dword ptr ds : [edx], ecx
        public_6c3041d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c30423 : nop
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
        je public_6c3044c
        mov dword ptr ds : [edi+4], ecx
        public_6c3044c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c3045f
        mov dword ptr ds : [edi+4], edx
        jmp public_6c3046d
        public_6c3045f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6c3046a
        mov dword ptr ds : [edi], edx
        jmp public_6c3046d
        public_6c3046a : nop
        mov dword ptr ds : [edi+8], edx
        public_6c3046d : nop
        mov dword ptr ds : [edx], ecx
        public_6c3046f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6c30472 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6c302e1
        public_6c3047e : nop
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
        UNREACHABLE_TRAP(0x6c30250)
    }
}

#undef public_6c302b9
#undef public_6c302cd
#undef public_6c302d3
#undef public_6c302e1
#undef public_6c30322
#undef public_6c3033b
#undef public_6c3034e
#undef public_6c30359
#undef public_6c3035c
#undef public_6c30361
#undef public_6c3038a
#undef public_6c303a3
#undef public_6c303b6
#undef public_6c303c0
#undef public_6c303e3
#undef public_6c303fb
#undef public_6c3040e
#undef public_6c3041b
#undef public_6c3041d
#undef public_6c30423
#undef public_6c3044c
#undef public_6c3045f
#undef public_6c3046a
#undef public_6c3046d
#undef public_6c3046f
#undef public_6c30472
#undef public_6c3047e
