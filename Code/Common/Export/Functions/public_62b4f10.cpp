#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4f10);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62b4f40 _public_62b4f40
#define public_62b4f5f _public_62b4f5f
#define public_62b4f75 _public_62b4f75
#define public_62b4f81 _public_62b4f81
#define public_62b4fc9 _public_62b4fc9
#define public_62b503a _public_62b503a
#define public_62b509e _public_62b509e

PROC_DECLARE(0x62b4f10, internal_62b4f10, public_62b4f10);
extern "C" NAKED register_t __cdecl internal_62b4f10()
{
    __asm
    {
        sub esp, 0x70
        push ebx
        mov ebx, dword ptr ss : [esp+0x78]
        test ebx, ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], 1
        je public_62b4f75
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov edi, dword ptr ds : [esi+0x1F8]
        cmp edi, dword ptr ds : [esi+0x1FC]
        je public_62b4f75
        mov edi, edi
        public_62b4f40 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b4f5f
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4f5f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ebp, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        cmp ebp, eax
        je public_62b4f81
        public_62b4f5f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x1FC]
        inc edx
        add edi, 8
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_62b4f40
        public_62b4f75 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x70
        ret 8
        public_62b4f81 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        dec ecx
        mov eax, ecx
        cdq 
        and edx, 3
        add eax, edx
        sar eax, 2
        inc eax
        and ecx, 0x80000003
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_639e6d4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_6399408]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_639b21c]
        fstp dword ptr ss : [esp+0x1C]
        jns public_62b4fc9
        dec ecx
        or ecx, 0xFFFFFFFC
        inc ecx
        public_62b4fc9 : nop
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_63fc460]
        test eax, eax
        mov dword ptr ss : [esp+0x40], 0
        fmul dword ptr ds : [public_639d208]
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        fmul qword ptr ds : [public_639df88]
        mov dword ptr ss : [esp+0x58], 0x3F800000
        fst dword ptr ss : [esp+0x10]
        fcos 
        fld dword ptr ss : [esp+0x10]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x38]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        jne public_62b503a
        call public_6391cf0
        mov dword ptr ds : [public_63fc460], eax
        public_62b503a : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov ebp, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        lea ebx, ss:[ebp+0x24]
        mov edx, ebx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x64]
        fstp st(0)
        mov eax, dword ptr ds : [public_63fc460]
        add esi, 8
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x5C]
        rep movsd
        jne public_62b509e
        call public_6391cf0
        mov dword ptr ds : [public_63fc460], eax
        public_62b509e : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x60]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x2C]
        mov edi, ebp
        lea esi, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], eax
        mov al, 1
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ebx+4], ecx
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x62b4f10)
    }
}

#undef public_62b4f40
#undef public_62b4f5f
#undef public_62b4f75
#undef public_62b4f81
#undef public_62b4fc9
#undef public_62b503a
#undef public_62b509e
