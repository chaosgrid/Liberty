#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dbbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62dbc96 _public_62dbc96
#define public_62dbd0d _public_62dbd0d
#define public_62dbdee _public_62dbdee
#define public_62dbe9b _public_62dbe9b
#define public_62dbea4 _public_62dbea4
#define public_62dbf29 _public_62dbf29
#define public_62dbf2d _public_62dbf2d
#define public_62dbf48 _public_62dbf48
#define public_62dbf7c _public_62dbf7c
#define public_62dbf9d _public_62dbf9d

PROC_DECLARE(0x62dbbe0, internal_62dbbe0, public_62dbbe0);
extern "C" NAKED register_t __cdecl internal_62dbbe0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi]
        mov ebx, eax
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        test eax, eax
        je public_62dbc96
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x58], 0
        call dword ptr ds : [edx+0x2C]
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edi+0x10], 0
        mov dword ptr ds : [edi+0x14], 0x3F800000
        mov dword ptr ds : [edi+0x18], 0
        lea edx, ds:[edi+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [edx+0x140]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 0x41
        jne public_62dbf9d
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], ecx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 8
        public_62dbc96 : nop
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fmul dword ptr ds : [public_639c13c]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_63fc994]
        test eax, eax
        jne public_62dbd0d
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dbd0d : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0xC]
        fcom dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 0x41
        jne public_62dbdee
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_62dbdee
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x1C]
        lea esi, ds:[ecx+4]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x18]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], eax
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ss : [esp+0x18]
        lea edi, ds:[ecx+0x10]
        fstp dword ptr ss : [esp+0x48]
        fxch 
        mov edx, edi
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], eax
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x3C]
        fcomp dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], eax
        fnstsw ax
        test ah, 0x41
        jne public_62dbe9b
        jmp public_62dbf29
        public_62dbdee : nop
        fld dword ptr ss : [esp+0x50]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_62dbea4
        fld dword ptr ss : [esp+0x50]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_62dbea4
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x18]
        lea esi, ds:[ecx+4]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x10]
        mov edx, esi
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], eax
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+8], eax
        fstp dword ptr ss : [esp+0x48]
        fxch 
        lea edi, ds:[ecx+0x10]
        fsub dword ptr ds : [esi]
        mov edx, edi
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], eax
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        fcom dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], eax
        fnstsw ax
        test ah, 0x41
        je public_62dbf2d
        fstp st(0)
        public_62dbe9b : nop
        fld dword ptr ss : [esp+0xC]
        jmp public_62dbf2d
        public_62dbea4 : nop
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x24]
        lea esi, ds:[ecx+4]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x10]
        mov edx, esi
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], eax
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+8], eax
        fstp dword ptr ss : [esp+0x48]
        fxch 
        lea edi, ds:[ecx+0x10]
        fsub dword ptr ds : [esi]
        mov edx, edi
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], eax
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        fcom dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+8], eax
        fnstsw ax
        test ah, 0x41
        je public_62dbf2d
        fstp st(0)
        public_62dbf29 : nop
        fld dword ptr ss : [esp+0x50]
        public_62dbf2d : nop
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_63fc994]
        test eax, eax
        jne public_62dbf48
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dbf48 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [public_63fc994]
        test eax, eax
        jne public_62dbf7c
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dbf7c : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        public_62dbf9d : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x62dbbe0)
    }
}

#undef public_62dbc96
#undef public_62dbd0d
#undef public_62dbdee
#undef public_62dbe9b
#undef public_62dbea4
#undef public_62dbf29
#undef public_62dbf2d
#undef public_62dbf48
#undef public_62dbf7c
#undef public_62dbf9d
