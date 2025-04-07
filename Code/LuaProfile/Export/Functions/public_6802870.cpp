#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68026e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_68028ea _public_68028ea
#define public_68028f7 _public_68028f7

PROC_DECLARE(0x6802870, internal_6802870, public_6802870);
extern "C" NAKED register_t __cdecl internal_6802870()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [esi]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, edx
        jg public_68028f7
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        sub eax, ecx
        push ebp
        sar eax, 4
        lea ebp, ds:[eax+edx+0x80]
        mov ebx, ebp
        shl ebx, 4
        sub edi, ecx
        push ebx
        push ecx
        sar edi, 4
        call public_68065d0
        shl edi, 4
        add esp, 8
        add edi, eax
        lea edx, ds:[ebx+eax-0x10]
        cmp ebp, 0x1770
        pop ebp
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], edi
        pop ebx
        jl public_68028f7
        push 0x64
        call public_68026e0
        add esp, 4
        test eax, eax
        jne public_68028ea
/*FIXUP push offset public_680d484 @0x68028da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d484
        call public_6802e00
        add esp, 4
        pop edi
        pop esi
        ret 
/*FIXUP public_68028ea : nop
        push offset public_680d470 @0x68028ea*/
  FIXUP public_68028ea : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d470
        call public_6802e00
        add esp, 4
        public_68028f7 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802870)
    }
}

#undef public_68028ea
#undef public_68028f7
