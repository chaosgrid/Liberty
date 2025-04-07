#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624629a);
CLANG_FORWARD_PROC_SYMBOL(public_62464be);

#define public_62462b0 _public_62462b0
#define public_62462d8 _public_62462d8
#define public_62462dc _public_62462dc
#define public_6246302 _public_6246302
#define public_6246319 _public_6246319
#define public_624632a _public_624632a
#define public_624632f _public_624632f
#define public_624633f _public_624633f
#define public_6246342 _public_6246342

PROC_DECLARE(0x624629a, internal_624629a, public_624629a);
extern "C" NAKED register_t __cdecl internal_624629a()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_62462b0
        cmp dword ptr ds : [public_6257c60], eax
        jle public_62462d8
        dec dword ptr ds : [public_6257c60]
        public_62462b0 : nop
        mov ecx, dword ptr ds : [public_624b090]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6258384], ecx
        jne public_6246302
        push 0x80
        call dword ptr ds : [public_624b08c]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6258390], eax
        jne public_62462dc
        public_62462d8 : nop
        xor eax, eax
        jmp public_6246342
        public_62462dc : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6258390]
/*FIXUP push offset public_6255050 @0x62462e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255050
/*FIXUP push offset public_6255000 @0x62462e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255000
        mov dword ptr ds : [public_625838c], eax
        call public_62464be
        inc dword ptr ds : [public_6257c60]
        pop ecx
        pop ecx
        jmp public_624633f
        public_6246302 : nop
        test eax, eax
        jne public_624633f
        mov eax, dword ptr ds : [public_6258390]
        test eax, eax
        je public_624633f
        mov ecx, dword ptr ds : [public_625838c]
        push esi
        lea esi, ds:[ecx-4]
        public_6246319 : nop
        cmp esi, eax
        jb public_624632f
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_624632a
        call ecx
        mov eax, dword ptr ds : [public_6258390]
        public_624632a : nop
        sub esi, 4
        jmp public_6246319
        public_624632f : nop
        push eax
        call dword ptr ds : [public_624b074]
        and dword ptr ds : [public_6258390], 0
        pop ecx
        pop esi
        public_624633f : nop
        push 1
        pop eax
        public_6246342 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x624629a)
    }
}

#undef public_62462b0
#undef public_62462d8
#undef public_62462dc
#undef public_6246302
#undef public_6246319
#undef public_624632a
#undef public_624632f
#undef public_624633f
#undef public_6246342
