#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d233dd);

#define public_6d23429 _public_6d23429
#define public_6d23465 _public_6d23465
#define public_6d2349f _public_6d2349f

PROC_DECLARE(0x6d233dd, internal_6d233dd, public_6d233dd);
extern "C" NAKED register_t __cdecl internal_6d233dd()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x30
        jl public_6d23429
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x39
        jg public_6d23429
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        sub edx, 0x30
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d2349f
        public_6d23429 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x61
        jl public_6d23465
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x66
        jg public_6d23465
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        sub edx, 0x57
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d2349f
        public_6d23465 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x41
        jl public_6d2349f
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x46
        jg public_6d2349f
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        sub edx, 0x37
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+8], ecx
        public_6d2349f : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d233dd)
    }
}

#undef public_6d23429
#undef public_6d23465
#undef public_6d2349f
