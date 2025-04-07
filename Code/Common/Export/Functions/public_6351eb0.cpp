#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6351310);
CLANG_FORWARD_PROC_SYMBOL(public_6351eb0);

#define public_6351ee2 _public_6351ee2
#define public_6351ef8 _public_6351ef8
#define public_6351f0f _public_6351f0f
#define public_6351f2e _public_6351f2e
#define public_6351f4e _public_6351f4e
#define public_6351f52 _public_6351f52
#define public_6351f6a _public_6351f6a

PROC_DECLARE(0x6351eb0, internal_6351eb0, public_6351eb0);
extern "C" NAKED register_t __cdecl internal_6351eb0()
{
    __asm
    {
        sub esp, 0x10
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+0xAC]
        mov dword ptr ss : [esp+8], ecx
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6351ee2
        fst dword ptr ss : [esp]
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        jmp public_6351ef8
        public_6351ee2 : nop
        fstp st(0)
        fld dword ptr ds : [ecx+0xAC]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0xB0]
        fstp dword ptr ss : [esp+4]
        public_6351ef8 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push esi
        xor esi, esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov si, word ptr ds : [edi+2]
        dec esi
        cmp esi, 1
        jle public_6351f2e
        public_6351f0f : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+esi*4]
        push ebx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6351310
        dec esi
        cmp esi, 1
        jg public_6351f0f
        public_6351f2e : nop
        cmp esi, 1
        jne public_6351f4e
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ebx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6351310
        jmp public_6351f52
        public_6351f4e : nop
        test esi, esi
        jne public_6351f6a
        public_6351f52 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6351310
        public_6351f6a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6351eb0)
    }
}

#undef public_6351ee2
#undef public_6351ef8
#undef public_6351f0f
#undef public_6351f2e
#undef public_6351f4e
#undef public_6351f52
#undef public_6351f6a
