#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d55432 _public_6d55432
#define public_6d5543a _public_6d5543a
#define public_6d55447 _public_6d55447
#define public_6d5546e _public_6d5546e
#define public_6d55470 _public_6d55470

PROC_DECLARE(0x6d553c0, internal_6d553c0, public_6d553c0);
extern "C" NAKED register_t __cdecl internal_6d553c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        push edi
        mov eax, 0xFFFFFFFE
        jbe public_6d55470
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d55470
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        je public_6d55470
        mov eax, dword ptr ss : [esp+0x10]
        imul ecx, 0x418
        lea edi, ds:[ecx+esi-0x418]
        add dword ptr ds : [edi+0x320], eax
        mov esi, dword ptr ds : [edi+0x31C]
        add esi, eax
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d55432
        mov dl, byte ptr ds : [edi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d5546e
        public_6d55432 : nop
        test esi, esi
        jge public_6d5543a
        xor esi, esi
        jmp public_6d55447
        public_6d5543a : nop
        cmp esi, 0x3B9AC9FF
        jle public_6d55447
        mov esi, 0x3B9AC9FF
        public_6d55447 : nop
        mov dword ptr ds : [edi+0x31C], esi
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push esi
        add edi, 0x348
        push edi
        call dword ptr ds : [edx+0x134]
        push edi
        push 0
        call public_6d43650
        add esp, 8
        public_6d5546e : nop
        xor eax, eax
        public_6d55470 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d553c0)
    }
}

#undef public_6d55432
#undef public_6d5543a
#undef public_6d55447
#undef public_6d5546e
#undef public_6d55470
