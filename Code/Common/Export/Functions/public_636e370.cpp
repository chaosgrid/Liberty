#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e370);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);

#define public_636e386 _public_636e386
#define public_636e388 _public_636e388
#define public_636e394 _public_636e394
#define public_636e3ba _public_636e3ba

PROC_DECLARE(0x636e370, internal_636e370, public_636e370);
extern "C" NAKED register_t __cdecl internal_636e370()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        je public_636e3ba
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+eax*4+4]
        test edx, edx
        je public_636e386
        dec edx
        jmp public_636e388
        public_636e386 : nop
        mov edx, eax
        public_636e388 : nop
        push esi
        lea esi, ds:[ebx+4]
        push edi
        mov ecx, esi
        mov eax, esi
        lea edi, ds:[esi+edx*4]
        public_636e394 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        add ecx, 4
        test edx, edx
        jne public_636e394
        sub eax, 4
        cmp ecx, edi
        jbe public_636e394
        sub eax, esi
        sar eax, 2
        push eax
        push ebx
        call public_636ee40
        add esp, 8
        pop edi
        pop esi
        public_636e3ba : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e370)
    }
}

#undef public_636e386
#undef public_636e388
#undef public_636e394
#undef public_636e3ba
