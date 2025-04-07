#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f037d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f02fe9 _public_6f02fe9
#define public_6f02ffd _public_6f02ffd
#define public_6f03003 _public_6f03003
#define public_6f03011 _public_6f03011
#define public_6f03052 _public_6f03052
#define public_6f0306b _public_6f0306b
#define public_6f0307e _public_6f0307e
#define public_6f03089 _public_6f03089
#define public_6f0308c _public_6f0308c
#define public_6f03091 _public_6f03091
#define public_6f030ba _public_6f030ba
#define public_6f030d3 _public_6f030d3
#define public_6f030e6 _public_6f030e6
#define public_6f030f0 _public_6f030f0
#define public_6f03113 _public_6f03113
#define public_6f0312b _public_6f0312b
#define public_6f0313e _public_6f0313e
#define public_6f0314b _public_6f0314b
#define public_6f0314d _public_6f0314d
#define public_6f03153 _public_6f03153
#define public_6f0317c _public_6f0317c
#define public_6f0318f _public_6f0318f
#define public_6f0319a _public_6f0319a
#define public_6f0319d _public_6f0319d
#define public_6f0319f _public_6f0319f
#define public_6f031a2 _public_6f031a2
#define public_6f031ae _public_6f031ae

PROC_DECLARE(0x6f02f80, internal_6f02f80, public_6f02f80);
extern "C" NAKED register_t __cdecl internal_6f02f80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f037d0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f02fe9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f02fe9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f02fe9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f03003
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f03003
        public_6f02fe9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f02ffd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f03003
        public_6f02ffd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f03003
        mov dword ptr ds : [eax], ebx
        public_6f03003 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f031ae
        public_6f03011 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f031ae
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f030f0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f03052
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f031a2
        public_6f03052 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f03091
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f0306b
        mov dword ptr ds : [edx+4], eax
        public_6f0306b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f0307e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f0308c
        public_6f0307e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f03089
        mov dword ptr ds : [edx], ecx
        jmp public_6f0308c
        public_6f03089 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f0308c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f03091 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f030ba
        mov dword ptr ds : [edi+4], ecx
        public_6f030ba : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f030d3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f0319f
        public_6f030d3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f030e6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f0319f
        public_6f030e6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f0319f
        public_6f030f0 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f03113
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f031a2
        public_6f03113 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f03153
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f0312b
        mov dword ptr ds : [edx+4], eax
        public_6f0312b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f0313e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f0314d
        public_6f0313e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f0314b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f0314d
        public_6f0314b : nop
        mov dword ptr ds : [edx], ecx
        public_6f0314d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f03153 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f0317c
        mov dword ptr ds : [edi+4], ecx
        public_6f0317c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f0318f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f0319d
        public_6f0318f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f0319a
        mov dword ptr ds : [edi], edx
        jmp public_6f0319d
        public_6f0319a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f0319d : nop
        mov dword ptr ds : [edx], ecx
        public_6f0319f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f031a2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f03011
        public_6f031ae : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f02f80)
    }
}

#undef public_6f02fe9
#undef public_6f02ffd
#undef public_6f03003
#undef public_6f03011
#undef public_6f03052
#undef public_6f0306b
#undef public_6f0307e
#undef public_6f03089
#undef public_6f0308c
#undef public_6f03091
#undef public_6f030ba
#undef public_6f030d3
#undef public_6f030e6
#undef public_6f030f0
#undef public_6f03113
#undef public_6f0312b
#undef public_6f0313e
#undef public_6f0314b
#undef public_6f0314d
#undef public_6f03153
#undef public_6f0317c
#undef public_6f0318f
#undef public_6f0319a
#undef public_6f0319d
#undef public_6f0319f
#undef public_6f031a2
#undef public_6f031ae
