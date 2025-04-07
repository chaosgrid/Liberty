#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_629e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_629e840);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393ae8);

#define public_629e2b0 _public_629e2b0
#define public_629e2c0 _public_629e2c0
#define public_629e355 _public_629e355
#define public_629e35b _public_629e35b
#define public_629e36a _public_629e36a
#define public_629e36c _public_629e36c
#define public_629e376 _public_629e376
#define public_629e3a3 _public_629e3a3
#define public_629e3b1 _public_629e3b1

PROC_DECLARE(0x629e270, internal_629e270, public_629e270);
extern "C" NAKED register_t __cdecl internal_629e270()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393ae8 @0x629e272*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393ae8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        push edi
        push ebp
        mov edi, ecx
        call public_629e4a0
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x40], eax
        jne public_629e3a3
        mov eax, dword ptr ds : [edi+0x58]
        push esi
        mov esi, dword ptr ds : [edi+0x54]
        cmp esi, eax
        je public_629e2c0
        public_629e2b0 : nop
        cmp dword ptr ds : [esi+4], ebx
        je public_629e35b
        add esi, 0x24
        cmp esi, eax
        jne public_629e2b0
        public_629e2c0 : nop
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x2C]
        call public_628b030
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], ebx
        mov eax, dword ptr ds : [edi+0x58]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[edi+0x50]
        push 1
        push eax
        mov dword ptr ss : [esp+0x48], 1
        call public_629e840
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x40], 2
        call public_6280b40
        cmp dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        je public_629e355
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        public_629e355 : nop
        mov esi, dword ptr ds : [edi+0x58]
        sub esi, 0x24
        public_629e35b : nop
        cmp ebp, ebx
        lea ecx, ds:[esi+8]
        je public_629e36a
        lea eax, ss:[ebp+0x9C]
        jmp public_629e36c
        public_629e36a : nop
        xor eax, eax
        public_629e36c : nop
        cmp eax, dword ptr ds : [ecx]
        je public_629e376
        push eax
        call public_6341610
        public_629e376 : nop
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        test al, al
        pop esi
        jne public_629e3b1
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx+0x30]
        jmp public_629e3b1
        public_629e3a3 : nop
        lea eax, ss:[esp+0x40]
        push eax
        push 0x14
        mov ecx, edi
        call public_629b010
        public_629e3b1 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x40]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x629e270)
    }
}

#undef public_629e2b0
#undef public_629e2c0
#undef public_629e355
#undef public_629e35b
#undef public_629e36a
#undef public_629e36c
#undef public_629e376
#undef public_629e3a3
#undef public_629e3b1
