#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae260);
CLANG_FORWARD_PROC_SYMBOL(public_4ae4b0);

#define public_4ae4d1 _public_4ae4d1
#define public_4ae520 _public_4ae520
#define public_4ae540 _public_4ae540
#define public_4ae580 _public_4ae580
#define public_4ae598 _public_4ae598
#define public_4ae63d _public_4ae63d

PROC_DECLARE(0x4ae4b0, internal_4ae4b0, public_4ae4b0);
extern "C" NAKED register_t __cdecl internal_4ae4b0()
{
    __asm
    {
        sub esp, 0x80
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7F4]
        test eax, eax
        jne public_4ae4d1
        mov al, byte ptr ds : [esi+0x8A0]
        test al, al
        je public_4ae63d
        public_4ae4d1 : nop
        mov al, byte ptr ds : [esi+0x8A0]
        test al, al
        jne public_4ae520
        push 0x40
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ds : [esi+0x7F4], 0
        mov byte ptr ds : [esi+0x8A0], 1
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x52F
        push ecx
        call public_4347e0
        mov edx, dword ptr ds : [esi+0x364]
        mov eax, dword ptr ds : [public_679ba4]
        add esp, 0x10
        mov dword ptr ds : [edx+0x348], eax
        pop esi
        add esp, 0x80
        ret 
        public_4ae520 : nop
        push ebx
        push edi
        push 0
        mov ecx, esi
        call public_4ae260
        lea eax, ds:[esi+0x3B0]
        mov edi, 0xD
        mov ecx, 3
        nop 
        lea esp, ss:[esp]
        public_4ae540 : nop
        mov edx, dword ptr ds : [eax-0x34]
        or byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [eax]
        or byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [eax+0xA0]
        or byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [eax+0x34]
        or byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [eax+0xD4]
        mov bl, byte ptr ds : [edx+0x6C]
        or bl, cl
        add eax, 4
        dec edi
        mov byte ptr ds : [edx+0x6C], bl
        jne public_4ae540
        lea edx, ds:[esi+0x418]
        mov edi, 0xE
        lea esp, ss:[esp]
        public_4ae580 : nop
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x6C]
        or bl, cl
        add edx, 4
        dec edi
        mov byte ptr ds : [eax+0x6C], bl
        jne public_4ae580
        lea eax, ds:[esi+0x4C4]
        mov edi, ecx
        public_4ae598 : nop
        mov edx, dword ptr ds : [eax+0x10]
        or byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x6C]
        or bl, cl
        add eax, 4
        dec edi
        mov byte ptr ds : [edx+0x6C], bl
        jne public_4ae598
        mov eax, dword ptr ds : [esi+0x4BC]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x4C0]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7A8]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7AC]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7B0]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7B4]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x344]
        mov dl, byte ptr ds : [eax+0x6C]
        or dl, cl
        push 0x40
        lea ecx, ss:[esp+0x10]
        push ecx
        mov byte ptr ds : [eax+0x6C], dl
        mov edx, dword ptr ds : [public_67eca8]
        push 0x691
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0x10]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        push 0
        mov ecx, esi
        call public_4abdf0
        mov esi, dword ptr ds : [esi+0x7F0]
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFC
        pop edi
        mov byte ptr ds : [esi+0x6C], al
        pop ebx
        public_4ae63d : nop
        pop esi
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4ae4b0)
    }
}

#undef public_4ae4d1
#undef public_4ae520
#undef public_4ae540
#undef public_4ae580
#undef public_4ae598
#undef public_4ae63d
