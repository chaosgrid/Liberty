#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_45e940);
CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_45e99d _public_45e99d
#define public_45e9b9 _public_45e9b9
#define public_45e9e5 _public_45e9e5
#define public_45ea2c _public_45ea2c
#define public_45ea55 _public_45ea55
#define public_45eaa3 _public_45eaa3
#define public_45eaa7 _public_45eaa7
#define public_45eabf _public_45eabf
#define public_45eacb _public_45eacb
#define public_45eacf _public_45eacf

PROC_DECLARE(0x45e940, internal_45e940, public_45e940);
extern "C" NAKED register_t __cdecl internal_45e940()
{
    __asm
    {
        sub esp, 0x1C
        mov ax, word ptr ds : [public_673344]
        mov edx, dword ptr ds : [public_66da84]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_66da40]
        xor ebx, ebx
        push edi
        lea edi, ds:[esi+0x568]
        mov word ptr ss : [esp+0x14], ax
        mov eax, dword ptr ds : [edi]
        cmp eax, ecx
        mov word ptr ss : [esp+0x10], bx
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        jne public_45e99d
        cmp edx, ebx
        je public_45e99d
        cmp dword ptr ds : [edx+0x350], ebx
        je public_45e99d
        mov eax, dword ptr ds : [public_66da38]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_45eabf
        public_45e99d : nop
        cmp eax, dword ptr ds : [public_66da38]
        je public_45ea2c
        cmp eax, ecx
        jne public_45e9b9
        cmp edx, ebx
        je public_45ea2c
        cmp dword ptr ds : [edx+0x350], ebx
        je public_45ea2c
        public_45e9b9 : nop
        mov dword ptr ss : [esp+0x10], ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x530]
        call public_46cd50
        mov edx, dword ptr ds : [esi+0x530]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [edx+4]
        je public_45eaa7
        mov edi, dword ptr ss : [esp+0x14]
        public_45e9e5 : nop
        lea ecx, ss:[esp+0x18]
        call public_43c010
        mov ecx, dword ptr ds : [esi+0x530]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edx
        je public_45eaa7
        mov ecx, dword ptr ds : [eax+0xC]
        mov ebp, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        cmp byte ptr ss : [esp+0x1E], bl
        mov dword ptr ss : [esp+0x20], ebp
        jne public_45eaa7
        cmp ecx, edi
        jne public_45eaa3
        cmp eax, edx
        jne public_45e9e5
        jmp public_45eaa7
        public_45ea2c : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x530]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x1C], edx
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        je public_45eaa7
        mov edi, dword ptr ss : [esp+0x14]
        public_45ea55 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call public_43c010
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        cmp byte ptr ss : [esp+0x26], bl
        mov dword ptr ss : [esp+0x28], edx
        jne public_45eaa7
        cmp ecx, edi
        jne public_45eaa3
        lea ecx, ss:[esp+0x18]
        call public_43c010
        mov ecx, dword ptr ds : [esi+0x530]
        lea eax, ss:[esp+0x1C]
        push eax
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        jne public_45ea55
        jmp public_45eaa7
        public_45eaa3 : nop
        mov dword ptr ss : [esp+0x10], ecx
        public_45eaa7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [public_66da38]
        jne public_45eacf
        mov ecx, dword ptr ds : [public_66da40]
        mov edx, dword ptr ds : [public_66da84]
        public_45eabf : nop
        cmp edx, ebx
        je public_45eacb
        cmp dword ptr ds : [edx+0x350], ebx
        jne public_45eacf
        public_45eacb : nop
        mov dword ptr ss : [esp+0x10], ecx
        public_45eacf : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_45eaf0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x45e940)
    }
}

#undef public_45e99d
#undef public_45e9b9
#undef public_45e9e5
#undef public_45ea2c
#undef public_45ea55
#undef public_45eaa3
#undef public_45eaa7
#undef public_45eabf
#undef public_45eacb
#undef public_45eacf
