#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540eb0);
CLANG_FORWARD_PROC_SYMBOL(public_542330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_540ecc _public_540ecc
#define public_540f06 _public_540f06
#define public_540f32 _public_540f32
#define public_540f8f _public_540f8f
#define public_540fa2 _public_540fa2
#define public_540fb9 _public_540fb9

PROC_DECLARE(0x540eb0, internal_540eb0, public_540eb0);
extern "C" NAKED register_t __cdecl internal_540eb0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_678ae0]
        sub esp, 8
        push esi
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_540ecc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [public_678ae0]
        public_540ecc : nop
        mov esi, dword ptr ds : [public_678ab4]
        cmp esi, edi
        jbe public_540fb9
        mov edx, dword ptr ds : [public_678ae4]
        inc edx
        cmp ecx, edi
        mov dword ptr ds : [public_678ae4], edx
        jne public_540f06
/*FIXUP push offset public_5df8a4 @0x540eeb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df8a4
        call dword ptr ds : [public_5c6a90]
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [public_678ae0], eax
        je public_540fb9
        public_540f06 : nop
        lea ecx, ds:[esi+esi*4]
        shl ecx, 2
        push ebx
        push ecx
        call public_5b7e84
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_678ab4
        mov ebx, eax
        mov dword ptr ss : [esp+0x10], edi
        call public_542330
        test eax, eax
        je public_540fa2
        lea esi, ds:[ebx+0x10]
        public_540f32 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x88]
        test eax, eax
        jne public_540f8f
        test dword ptr ss : [esp+0x10], 0xFDFF
        je public_540f8f
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi-0x10], eax
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        add eax, 0x2C
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi-0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        fld dword ptr ds : [eax+0x38]
        fstp dword ptr ds : [esi]
        inc edi
        add esi, 0x14
        public_540f8f : nop
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_678ab4
        call public_542330
        test eax, eax
        jne public_540f32
        public_540fa2 : nop
        mov ecx, dword ptr ds : [public_678ae0]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [edx+0x14]
        push ebx
        call public_5b7e1d
        add esp, 4
        pop ebx
        public_540fb9 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x540eb0)
    }
}

#undef public_540ecc
#undef public_540f06
#undef public_540f32
#undef public_540f8f
#undef public_540fa2
#undef public_540fb9
