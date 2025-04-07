#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63442c0);
CLANG_FORWARD_PROC_SYMBOL(public_6344d50);
CLANG_FORWARD_PROC_SYMBOL(public_6345eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6345edc _public_6345edc
#define public_6345ef5 _public_6345ef5
#define public_6345f02 _public_6345f02

PROC_DECLARE(0x6345eb0, internal_6345eb0, public_6345eb0);
extern "C" NAKED register_t __cdecl internal_6345eb0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr ds : [esi+0x78]
        shl edi, 0x16
        push 0
        sar edi, 0x1E
        call public_6344d50
        mov ebx, dword ptr ds : [esi+0x1C]
        test ebx, ebx
        je public_6345edc
        mov ecx, ebx
        call public_63442c0
        push ebx
        call public_6391d5a
        add esp, 4
        public_6345edc : nop
        mov eax, dword ptr ds : [esi+0x78]
        cmp al, 9
        mov dword ptr ds : [esi+0x1C], 0
        jne public_6345ef5
        and eax, 0xFFFFFF10
        or eax, 0x10
        mov dword ptr ds : [esi+0x78], eax
        public_6345ef5 : nop
        cmp edi, 1
        jne public_6345f02
        push edi
        mov ecx, esi
        call public_6344d50
        public_6345f02 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6345eb0)
    }
}

#undef public_6345edc
#undef public_6345ef5
#undef public_6345f02
