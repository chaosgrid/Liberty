#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4aeab0);
CLANG_FORWARD_PROC_SYMBOL(public_4b2540);

#define public_4aeac2 _public_4aeac2
#define public_4aead2 _public_4aead2
#define public_4aeb10 _public_4aeb10
#define public_4aeb30 _public_4aeb30

PROC_DECLARE(0x4aeab0, internal_4aeab0, public_4aeab0);
extern "C" NAKED register_t __cdecl internal_4aeab0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x848]
        test al, al
        je public_4aeac2
        push 1
        call public_4b2540
        ret 
        public_4aeac2 : nop
        push ebx
        push esi
        push edi
        lea eax, ds:[ecx+0x3B0]
        mov edi, 0xD
        mov dl, 0xFC
        public_4aead2 : nop
        mov esi, dword ptr ds : [eax-0x34]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x34]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0xA0]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0xD4]
        mov bl, byte ptr ds : [esi+0x6C]
        and bl, dl
        add eax, 4
        dec edi
        mov byte ptr ds : [esi+0x6C], bl
        jne public_4aead2
        lea esi, ds:[ecx+0x418]
        mov edi, 0xE
        nop 
        lea esp, ss:[esp]
        public_4aeb10 : nop
        mov eax, dword ptr ds : [esi]
        mov bl, byte ptr ds : [eax+0x6C]
        and bl, dl
        add esi, 4
        dec edi
        mov byte ptr ds : [eax+0x6C], bl
        jne public_4aeb10
        lea eax, ds:[ecx+0x4C4]
        mov edi, 3
        nop 
        lea esp, ss:[esp]
        public_4aeb30 : nop
        mov esi, dword ptr ds : [eax+0x10]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax]
        mov bl, byte ptr ds : [esi+0x6C]
        and bl, dl
        add eax, 4
        dec edi
        mov byte ptr ds : [esi+0x6C], bl
        jne public_4aeb30
        mov eax, dword ptr ds : [ecx+0x4BC]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x4C0]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x4B8]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7A8]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7AC]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7B0]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7B4]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x344]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x364]
        mov ecx, dword ptr ds : [public_679bb0]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x348], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4aeab0)
    }
}

#undef public_4aeac2
#undef public_4aead2
#undef public_4aeb10
#undef public_4aeb30
