#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348c80);
CLANG_FORWARD_PROC_SYMBOL(public_6348cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348d80);
CLANG_FORWARD_PROC_SYMBOL(public_6348e60);
CLANG_FORWARD_PROC_SYMBOL(public_6348ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6349460);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6348cd0 _public_6348cd0
#define public_6348cfd _public_6348cfd
#define public_6348d09 _public_6348d09
#define public_6348d18 _public_6348d18
#define public_6348d2d _public_6348d2d
#define public_6348d3c _public_6348d3c
#define public_6348d49 _public_6348d49
#define public_6348d70 _public_6348d70

PROC_DECLARE(0x6348cb0, internal_6348cb0, public_6348cb0);
extern "C" NAKED register_t __cdecl internal_6348cb0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        push ebp
        call public_6348ef0
        xor eax, eax
        mov ax, word ptr ss : [ebp+0x152]
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        js public_6348d49
        push ebx
        push esi
        public_6348cd0 : nop
        mov ecx, dword ptr ss : [ebp+0x154]
        mov ebx, dword ptr ds : [ecx+eax*4]
        push ebx
        mov ecx, edi
        call public_6348c80
        mov edx, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edx+eax*4]
        xor edx, edx
        mov dx, word ptr ds : [ecx+6]
        mov eax, edx
        and eax, 0xFFFF
        dec eax
        js public_6348d09
        mov esi, dword ptr ds : [ecx+8]
        lea esi, ds:[esi+eax*4]
        public_6348cfd : nop
        cmp dword ptr ds : [esi], ebp
        je public_6348d09
        dec eax
        sub esi, 4
        test eax, eax
        jge public_6348cfd
        public_6348d09 : nop
        dec edx
        mov word ptr ds : [ecx+6], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_6348d2d
        public_6348d18 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], esi
        xor edx, edx
        mov dx, word ptr ds : [ecx+6]
        inc eax
        cmp eax, edx
        jl public_6348d18
        public_6348d2d : nop
        cmp word ptr ds : [ecx+6], 0
        jne public_6348d3c
        push ebx
        mov ecx, edi
        call public_6348e60
        public_6348d3c : nop
        mov eax, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jns public_6348cd0
        pop esi
        pop ebx
        public_6348d49 : nop
        cmp word ptr ds : [edi+0xE], 0
        jne public_6348d70
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        push edi
        call public_6349460
        test edi, edi
        je public_6348d70
        mov ecx, edi
        call public_6348d80
        push edi
        call public_6391d5a
        add esp, 4
        public_6348d70 : nop
        pop edi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6348cb0)
    }
}

#undef public_6348cd0
#undef public_6348cfd
#undef public_6348d09
#undef public_6348d18
#undef public_6348d2d
#undef public_6348d3c
#undef public_6348d49
#undef public_6348d70
