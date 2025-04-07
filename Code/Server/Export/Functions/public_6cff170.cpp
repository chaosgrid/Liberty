#include "Server-PCH.h"


#define public_6cff192 _public_6cff192
#define public_6cff1cc _public_6cff1cc
#define public_6cff1e9 _public_6cff1e9
#define public_6cff203 _public_6cff203
#define public_6cff21d _public_6cff21d
#define public_6cff269 _public_6cff269
#define public_6cff27a _public_6cff27a

PROC_DECLARE(0x6cff170, internal_6cff170, public_6cff170);
extern "C" NAKED register_t __cdecl internal_6cff170()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6cff27a
        push ebx
        mov ebx, dword ptr ds : [public_6d64568]
        public_6cff192 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cff269
/*FIXUP push offset public_6d66f50 @0x6cff1a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f50
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff1cc
        call dword ptr ds : [public_6d64564]
        push 0
        push eax
        call dword ptr ds : [public_6d64250]
        add esp, 8
        mov dword ptr ds : [edi+0x28], eax
        jmp public_6cff269
/*FIXUP public_6cff1cc : nop
        push offset public_6d66f80 @0x6cff1cc*/
  FIXUP public_6cff1cc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f80
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff1e9
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x2C]
        jmp public_6cff269
/*FIXUP public_6cff1e9 : nop
        push offset public_6d66f78 @0x6cff1e9*/
  FIXUP public_6cff1e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f78
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff203
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x30]
        jmp public_6cff269
/*FIXUP public_6cff203 : nop
        push offset public_6d66f70 @0x6cff203*/
  FIXUP public_6cff203 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f70
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff21d
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x34]
        jmp public_6cff269
/*FIXUP public_6cff21d : nop
        push offset public_6d66f64 @0x6cff21d*/
  FIXUP public_6cff21d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f64
        call ebx
        test al, al
        je public_6cff269
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ss : [esp+0xC]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ss : [esp+0x10]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0x38]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_6cff269 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cff192
        pop ebx
        public_6cff27a : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6cff170)
    }
}

#undef public_6cff192
#undef public_6cff1cc
#undef public_6cff1e9
#undef public_6cff203
#undef public_6cff21d
#undef public_6cff269
#undef public_6cff27a
