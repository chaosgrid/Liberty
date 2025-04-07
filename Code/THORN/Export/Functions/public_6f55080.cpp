#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f55040);
CLANG_FORWARD_PROC_SYMBOL(public_6f55080);

#define public_6f550bb _public_6f550bb
#define public_6f550e1 _public_6f550e1
#define public_6f550f8 _public_6f550f8

PROC_DECLARE(0x6f55080, internal_6f55080, public_6f55080);
extern "C" NAKED register_t __cdecl internal_6f55080()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6f6152c @0x6f55086*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6152c
        push ebp
        call public_6f54f00
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_6f550f8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ds:[ebx*8+8]
        push eax
        push 0
        call public_6f4fe10
        add esp, 8
        xor esi, esi
        test ebx, ebx
        mov dword ptr ds : [edi+0x1C], eax
        jle public_6f550e1
/*FIXUP public_6f550bb : nop
        push offset public_6f61510 @0x6f550bb*/
  FIXUP public_6f550bb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61510
        push ebp
        call public_6f54f00
        mov ecx, dword ptr ds : [edi+0x1C]
        push ebp
        mov dword ptr ds : [ecx+esi*8+4], eax
        call public_6f55040
        mov edx, dword ptr ds : [edi+0x1C]
        add esp, 0xC
        mov dword ptr ds : [edx+esi*8], eax
        inc esi
        cmp esi, ebx
        jl public_6f550bb
        public_6f550e1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [eax+esi*8+4], 0xFFFFFFFF
        mov ecx, dword ptr ds : [edi+0x1C]
        pop edi
        mov dword ptr ds : [ecx+esi*8], 0
        pop esi
        public_6f550f8 : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55080)
    }
}

#undef public_6f550bb
#undef public_6f550e1
#undef public_6f550f8
