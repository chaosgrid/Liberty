#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bc70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4c2da _public_6f4c2da
#define public_6f4c2e7 _public_6f4c2e7

PROC_DECLARE(0x6f4c260, internal_6f4c260, public_6f4c260);
extern "C" NAKED register_t __cdecl internal_6f4c260()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [esi]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, edx
        jg public_6f4c2e7
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
        call public_6f4fe10
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
        jl public_6f4c2e7
        push 0x64
        call public_6f4bc70
        add esp, 4
        test eax, eax
        jne public_6f4c2da
/*FIXUP push offset public_6f60524 @0x6f4c2ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60524
        call public_6f4c7f0
        add esp, 4
        pop edi
        pop esi
        ret 
/*FIXUP public_6f4c2da : nop
        push offset public_6f60510 @0x6f4c2da*/
  FIXUP public_6f4c2da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60510
        call public_6f4c7f0
        add esp, 4
        public_6f4c2e7 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4c260)
    }
}

#undef public_6f4c2da
#undef public_6f4c2e7
