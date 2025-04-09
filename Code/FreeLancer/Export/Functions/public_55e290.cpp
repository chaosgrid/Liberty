#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e290);

#define public_55e2b0 _public_55e2b0
#define public_55e2c8 _public_55e2c8
#define public_55e2d4 _public_55e2d4
#define public_55e318 _public_55e318
#define public_55e328 _public_55e328
#define public_55e32e _public_55e32e

PROC_DECLARE(0x55e290, internal_55e290, public_55e290);
extern "C" NAKED register_t __cdecl internal_55e290()
{
    __asm
    {
        sub esp, 0x10
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        je public_55e32e
        mov byte ptr ds : [edi+0x18], 0
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_55e2b0
        xor edx, edx
        jmp public_55e2c8
        public_55e2b0 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_55e2c8 : nop
        test edx, edx
        jle public_55e328
        push ebx
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], edx
        public_55e2d4 : nop
        mov esi, dword ptr ds : [edi+8]
        add esi, ebx
        lea ecx, ds:[esi+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_55e318
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        public_55e318 : nop
        mov eax, dword ptr ss : [esp+0xC]
        add ebx, 0x1C
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_55e2d4
        pop esi
        pop ebx
        public_55e328 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        public_55e32e : nop
        pop edi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x55e290)
    }
}

#undef public_55e2b0
#undef public_55e2c8
#undef public_55e2d4
#undef public_55e318
#undef public_55e328
#undef public_55e32e
