#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556090);

#define public_5560c0 _public_5560c0
#define public_55619e _public_55619e
#define public_5561a2 _public_5561a2
#define public_5561b5 _public_5561b5
#define public_5561bf _public_5561bf
#define public_5561c3 _public_5561c3
#define public_5561c7 _public_5561c7
#define public_5561ec _public_5561ec

PROC_DECLARE(0x556090, internal_556090, public_556090);
extern "C" NAKED register_t __cdecl internal_556090()
{
    __asm
    {
        sub esp, 0x44
        mov eax, dword ptr ds : [public_67999c]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        je public_5561ec
        mov ecx, dword ptr ss : [esp+0x4C]
        push esi
        push edi
        lea esp, ss:[esp]
        public_5560c0 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        je public_5561c7
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        lea esi, ds:[edi+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6ba8]
        test al, al
        je public_5561c3
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        push edx
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6bb0]
        fld dword ptr ds : [public_5c75dc]
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], esi
        jle public_55619e
        test esi, esi
        jle public_55619e
        mov ecx, dword ptr ss : [esp+0x54]
        fstp st(0)
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        sub eax, edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        sub edx, eax
        mov dword ptr ss : [esp+0x18], edx
        fidiv dword ptr ss : [esp+0x38]
        fild dword ptr ss : [esp+0x18]
        fidiv dword ptr ss : [esp+0x4C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(2)
        fstp st(0)
        jmp public_5561a2
        public_55619e : nop
        mov ecx, dword ptr ss : [esp+0x54]
        public_5561a2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_5561b5
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_5561bf
        public_5561b5 : nop
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], edi
        jmp public_5561c7
        public_5561bf : nop
        fstp st(0)
        jmp public_5561c7
        public_5561c3 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        public_5561c7 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [public_67999c]
        jne public_5560c0
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        pop edi
        pop esi
        je public_5561ec
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop ebx
        add esp, 0x44
        ret 
        public_5561ec : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx], 0
        xor al, al
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x556090)
    }
}

#undef public_5560c0
#undef public_55619e
#undef public_5561a2
#undef public_5561b5
#undef public_5561bf
#undef public_5561c3
#undef public_5561c7
#undef public_5561ec
