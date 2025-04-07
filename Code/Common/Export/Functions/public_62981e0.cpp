#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_6297b20);
CLANG_FORWARD_PROC_SYMBOL(public_6298b10);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6298201 _public_6298201
#define public_6298203 _public_6298203
#define public_6298225 _public_6298225
#define public_629823a _public_629823a
#define public_629823c _public_629823c
#define public_6298248 _public_6298248
#define public_6298268 _public_6298268
#define public_629830a _public_629830a
#define public_629836a _public_629836a
#define public_62983ea _public_62983ea
#define public_6298428 _public_6298428
#define public_629842f _public_629842f

PROC_DECLARE(0x62981e0, internal_62981e0, public_62981e0);
extern "C" NAKED register_t __cdecl internal_62981e0()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x250]
        test eax, eax
        lea esi, ss:[ebp+0x250]
        push edi
        je public_6298201
        lea ecx, ds:[eax-0x9C]
        jmp public_6298203
        public_6298201 : nop
        xor ecx, ecx
        public_6298203 : nop
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, ecx
        mov di, word ptr ss : [esp+0x78]
        jne public_6298225
        cmp di, word ptr ss : [ebp+0x258]
        jne public_6298225
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x60
        ret 8
        public_6298225 : nop
        test eax, eax
        mov dword ptr ss : [ebp+0x26C], 0
        je public_629823a
        add eax, 0x9C
        jmp public_629823c
        public_629823a : nop
        xor eax, eax
        public_629823c : nop
        cmp eax, dword ptr ds : [esi]
        je public_6298248
        push eax
        mov ecx, esi
        call public_6341610
        public_6298248 : nop
        mov eax, dword ptr ss : [ebp+0x218]
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        mov word ptr ss : [ebp+0x258], di
        jne public_6298268
        cmp dword ptr ss : [ebp+0x1FC], ebx
        je public_629842f
        public_6298268 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_629842f
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629842f
        fld dword ptr ss : [ebp+0x268]
        fcomp dword ptr ds : [public_639cedc]
        fnstsw ax
        test ah, 0x41
        jne public_629842f
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        call public_6298b10
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_6297b20
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp]
        push 0
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x4C]
        rep movsd
        jne public_629830a
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_629830a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x22C]
        push edx
        lea edx, ss:[esp+0x50]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_6284f70
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        jne public_629836a
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_629836a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+0x1FC]
        cmp eax, ebx
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        lea esi, ss:[ebp+0x1F4]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivp 
        fld1 
        fpatan 
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fpatan 
        fchs 
        fstp dword ptr ss : [esp+0x78]
        je public_62983ea
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ds : [esi+0x14]
        fabs 
        fld dword ptr ds : [public_639ced8]
        fmul dword ptr ds : [public_639d20c]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62983ea
        push esi
        call public_627d4a0
        add esp, 4
        public_62983ea : nop
        mov eax, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [ebp+0x218]
        cmp eax, ebx
        lea esi, ss:[ebp+0x210]
        je public_6298428
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [esi+0x14]
        fabs 
        fld dword ptr ds : [public_639ced8]
        fmul dword ptr ds : [public_639d20c]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6298428
        push esi
        call public_627d4a0
        add esp, 4
        public_6298428 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [esi+0x10], ecx
        public_629842f : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x62981e0)
    }
}

#undef public_6298201
#undef public_6298203
#undef public_6298225
#undef public_629823a
#undef public_629823c
#undef public_6298248
#undef public_6298268
#undef public_629830a
#undef public_629836a
#undef public_62983ea
#undef public_6298428
#undef public_629842f
