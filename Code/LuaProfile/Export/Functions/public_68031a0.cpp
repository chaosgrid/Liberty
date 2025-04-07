#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802900);
CLANG_FORWARD_PROC_SYMBOL(public_68031a0);
CLANG_FORWARD_PROC_SYMBOL(public_6803c90);
CLANG_FORWARD_PROC_SYMBOL(public_6806750);
CLANG_FORWARD_PROC_SYMBOL(public_6808f30);
CLANG_FORWARD_PROC_SYMBOL(public_680bda4);

#define public_68031fc _public_68031fc
#define public_6803214 _public_6803214
#define public_680324e _public_680324e
#define public_6803269 _public_6803269
#define public_6803279 _public_6803279

PROC_DECLARE(0x68031a0, internal_68031a0, public_68031a0);
extern "C" NAKED register_t __cdecl internal_68031a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        mov eax, dword ptr ds : [public_680e604]
        lea ecx, ds:[eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x18], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x14], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0xC], edx
        lea edx, ss:[ebp-0x58]
        lea ecx, ss:[ebp-0x58]
        push 0
        push edx
        mov dword ptr ds : [eax+0x18], ecx
        call public_680bda4
        add esp, 8
        test eax, eax
        jne public_6803214
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_68031fc
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6808f30
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-8], 0
        jmp public_680324e
        public_68031fc : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6806750
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-8], 0
        jmp public_680324e
        public_6803214 : nop
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x14]
        add edx, 0xC
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+4]
        shl ecx, 4
        add ecx, edx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], 1
        public_680324e : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ss : [ebp-8]
        test eax, eax
        je public_6803269
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret 
        public_6803269 : nop
        mov eax, dword ptr ss : [ebp-4]
        test eax, eax
        jne public_6803279
        mov eax, 2
        mov esp, ebp
        pop ebp
        ret 
        public_6803279 : nop
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0xC]
        inc edx
        push edx
        call public_6802900
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+4]
        shl ecx, 4
        mov dword ptr ds : [ecx+edx], 0xFFFFFFFC
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        shl edx, 4
        push 0
        mov dword ptr ds : [edx+eax+8], ecx
        call public_6803c90
        add esp, 8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x68031a0)
    }
}

#undef public_68031fc
#undef public_6803214
#undef public_680324e
#undef public_6803269
#undef public_6803279
