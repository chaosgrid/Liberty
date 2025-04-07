#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008410);
CLANG_FORWARD_PROC_SYMBOL(public_10008470);
CLANG_FORWARD_PROC_SYMBOL(public_10008710);
CLANG_FORWARD_PROC_SYMBOL(public_10008760);

#define public_10008778 _public_10008778
#define public_10008797 _public_10008797
#define public_100087b2 _public_100087b2
#define public_100087c1 _public_100087c1
#define public_100087da _public_100087da
#define public_100087f3 _public_100087f3
#define public_1000880c _public_1000880c
#define public_10008825 _public_10008825
#define public_1000883e _public_1000883e
#define public_10008864 _public_10008864
#define public_1000887d _public_1000887d
#define public_10008896 _public_10008896
#define public_100088af _public_100088af
#define public_100088c8 _public_100088c8
#define public_100088e1 _public_100088e1
#define public_100088fa _public_100088fa
#define public_10008913 _public_10008913
#define public_1000892c _public_1000892c
#define public_10008945 _public_10008945
#define public_1000896b _public_1000896b
#define public_1000896d _public_1000896d
#define public_10008989 _public_10008989
#define public_1000898f _public_1000898f
#define public_100089ae _public_100089ae
#define public_100089c8 _public_100089c8
#define public_100089cb _public_100089cb
#define public_100089f8 _public_100089f8
#define public_10008a00 _public_10008a00
#define public_10008a04 _public_10008a04
#define public_10008a30 _public_10008a30
#define public_10008a34 _public_10008a34
#define public_10008a4d _public_10008a4d
#define public_10008a87 _public_10008a87
#define public_10008a8b _public_10008a8b
#define public_10008a9e _public_10008a9e
#define public_10008aac _public_10008aac

PROC_DECLARE(0x10008760, internal_10008760, public_10008760);
extern "C" NAKED register_t __cdecl internal_10008760()
{
    __asm
    {
        sub esp, 0x58
        push ebp
        push esi
        mov esi, eax
        xor ebp, ebp
        test esi, esi
        jne public_10008778
        pop esi
        mov eax, 0xFFFFFF9A
        pop ebp
        add esp, 0x58
        ret 
        public_10008778 : nop
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        add eax, edx
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        push ecx
        push edx
        call dword ptr ds : [esi+0x10]
        test eax, eax
        je public_10008797
        or ebp, 0xFFFFFFFF
        jmp public_100087c1
        public_10008797 : nop
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_100087b2
        or ebp, 0xFFFFFFFF
        jmp public_100087c1
        public_100087b2 : nop
        cmp dword ptr ss : [esp+8], 0x2014B50
        je public_100087c1
        mov ebp, 0xFFFFFF99
        public_100087c1 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100087da
        or ebp, 0xFFFFFFFF
        public_100087da : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100087f3
        or ebp, 0xFFFFFFFF
        public_100087f3 : nop
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_1000880c
        or ebp, 0xFFFFFFFF
        public_1000880c : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_10008825
        or ebp, 0xFFFFFFFF
        public_10008825 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_1000883e
        or ebp, 0xFFFFFFFF
        public_1000883e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x48]
        call public_10008710
        lea eax, ss:[esp+0x24]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10008864
        or ebp, 0xFFFFFFFF
        public_10008864 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_1000887d
        or ebp, 0xFFFFFFFF
        public_1000887d : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10008896
        or ebp, 0xFFFFFFFF
        public_10008896 : nop
        lea eax, ss:[esp+0x30]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100088af
        or ebp, 0xFFFFFFFF
        public_100088af : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100088c8
        or ebp, 0xFFFFFFFF
        public_100088c8 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100088e1
        or ebp, 0xFFFFFFFF
        public_100088e1 : nop
        lea eax, ss:[esp+0x3C]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_100088fa
        or ebp, 0xFFFFFFFF
        public_100088fa : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_10008913
        or ebp, 0xFFFFFFFF
        public_10008913 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x44]
        push edx
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_1000892c
        or ebp, 0xFFFFFFFF
        public_1000892c : nop
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10008945
        or ebp, 0xFFFFFFFF
        public_10008945 : nop
        test ebp, ebp
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        push edi
        jne public_10008a00
        mov eax, dword ptr ss : [esp+0x74]
        test eax, eax
        je public_1000898f
        mov ecx, dword ptr ss : [esp+0x78]
        cmp ebx, ecx
        jae public_1000896b
        mov byte ptr ds : [ebx+eax], 0
        mov edi, ebx
        jmp public_1000896d
        public_1000896b : nop
        mov edi, ecx
        public_1000896d : nop
        test ebx, ebx
        jbe public_10008989
        test ecx, ecx
        jbe public_10008989
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x1C]
        push edi
        push eax
        push ecx
        push edx
        call dword ptr ds : [esi+4]
        cmp eax, edi
        je public_10008989
        or ebp, 0xFFFFFFFF
        public_10008989 : nop
        sub ebx, edi
        test ebp, ebp
        jne public_10008a00
        public_1000898f : nop
        mov eax, dword ptr ss : [esp+0x7C]
        test eax, eax
        je public_10008a00
        mov edi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x80]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jb public_100089ae
        mov dword ptr ss : [esp+0x10], eax
        public_100089ae : nop
        test ebx, ebx
        je public_100089cb
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x1C]
        push 1
        push ebx
        push eax
        push ecx
        call dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_100089c8
        xor ebx, ebx
        jmp public_100089cb
        public_100089c8 : nop
        or ebp, 0xFFFFFFFF
        public_100089cb : nop
        test edi, edi
        jbe public_100089f8
        mov eax, dword ptr ss : [esp+0x80]
        test eax, eax
        jbe public_100089f8
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ds : [esi+0x20]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        push ecx
        push edx
        call dword ptr ds : [esi+4]
        cmp eax, dword ptr ss : [esp+0x10]
        je public_100089f8
        or ebp, 0xFFFFFFFF
        public_100089f8 : nop
        sub edi, dword ptr ss : [esp+0x10]
        add ebx, edi
        jmp public_10008a04
        public_10008a00 : nop
        add ebx, dword ptr ss : [esp+0x3C]
        public_10008a04 : nop
        test ebp, ebp
        jne public_10008aac
        mov eax, dword ptr ss : [esp+0x84]
        test eax, eax
        je public_10008a8b
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x88]
        cmp edi, ecx
        jae public_10008a30
        mov byte ptr ds : [edi+eax], 0
        mov dword ptr ss : [esp+0x10], edi
        jmp public_10008a34
        public_10008a30 : nop
        mov dword ptr ss : [esp+0x10], ecx
        public_10008a34 : nop
        test ebx, ebx
        je public_10008a4d
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x1C]
        push 1
        push ebx
        push eax
        push ecx
        call dword ptr ds : [esi+0x10]
        test eax, eax
        je public_10008a4d
        or ebp, 0xFFFFFFFF
        public_10008a4d : nop
        test edi, edi
        jbe public_10008a87
        mov eax, dword ptr ss : [esp+0x88]
        test eax, eax
        jbe public_10008a87
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ds : [esi+0x20]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        push ecx
        push edx
        call dword ptr ds : [esi+4]
        cmp eax, dword ptr ss : [esp+0x10]
        je public_10008a87
        pop edi
        pop ebx
        or ebp, 0xFFFFFFFF
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x58
        ret 
        public_10008a87 : nop
        test ebp, ebp
        jne public_10008aac
        public_10008a8b : nop
        mov edi, dword ptr ss : [esp+0x6C]
        test edi, edi
        je public_10008a9e
        mov ecx, 0x14
        lea esi, ss:[esp+0x18]
        rep movsd
        public_10008a9e : nop
        mov eax, dword ptr ss : [esp+0x70]
        test eax, eax
        je public_10008aac
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        public_10008aac : nop
        pop edi
        pop ebx
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x10008760)
    }
}

#undef public_10008778
#undef public_10008797
#undef public_100087b2
#undef public_100087c1
#undef public_100087da
#undef public_100087f3
#undef public_1000880c
#undef public_10008825
#undef public_1000883e
#undef public_10008864
#undef public_1000887d
#undef public_10008896
#undef public_100088af
#undef public_100088c8
#undef public_100088e1
#undef public_100088fa
#undef public_10008913
#undef public_1000892c
#undef public_10008945
#undef public_1000896b
#undef public_1000896d
#undef public_10008989
#undef public_1000898f
#undef public_100089ae
#undef public_100089c8
#undef public_100089cb
#undef public_100089f8
#undef public_10008a00
#undef public_10008a04
#undef public_10008a30
#undef public_10008a34
#undef public_10008a4d
#undef public_10008a87
#undef public_10008a8b
#undef public_10008a9e
#undef public_10008aac
