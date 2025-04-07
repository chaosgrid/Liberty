#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68051d0);
CLANG_FORWARD_PROC_SYMBOL(public_6805250);
CLANG_FORWARD_PROC_SYMBOL(public_6806100);

#define public_68051f3 _public_68051f3
#define public_680521f _public_680521f
#define public_6805229 _public_6805229
#define public_680523e _public_680523e

PROC_DECLARE(0x68051d0, internal_68051d0, public_68051d0);
extern "C" NAKED register_t __cdecl internal_68051d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebp
        call public_6805250
        mov ecx, eax
        cdq 
        add esp, 4
        idiv ebx
        mov dword ptr ss : [esp+0x18], ecx
        mov edi, edx
        public_68051f3 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [ebp]
        mov esi, edi
        shl esi, 5
        add esi, eax
        mov eax, dword ptr ds : [esi]
        cmp eax, edx
        jne public_680521f
        push esi
        push ebp
        call public_6806100
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        jmp public_6805229
        public_680521f : nop
        xor edx, edx
        cmp eax, 0xFFFFFFFA
        setne dl
        mov eax, edx
        public_6805229 : nop
        test eax, eax
        je public_680523e
        lea eax, ds:[ebx-2]
        and eax, ecx
        lea edi, ds:[edi+eax+1]
        cmp edi, ebx
        jl public_68051f3
        sub edi, ebx
        jmp public_68051f3
        public_680523e : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68051d0)
    }
}

#undef public_68051f3
#undef public_680521f
#undef public_6805229
#undef public_680523e
