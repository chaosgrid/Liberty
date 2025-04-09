#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_52cd40);
CLANG_FORWARD_PROC_SYMBOL(public_532000);

#define public_52cd97 _public_52cd97
#define public_52cdac _public_52cdac
#define public_52cdc1 _public_52cdc1
#define public_52ce70 _public_52ce70
#define public_52ce74 _public_52ce74
#define public_52ce89 _public_52ce89
#define public_52ce99 _public_52ce99
#define public_52ceaa _public_52ceaa
#define public_52cebb _public_52cebb

PROC_DECLARE(0x52cd40, internal_52cd40, public_52cd40);
extern "C" NAKED register_t __cdecl internal_52cd40()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_52ce74
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_52ce74
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_52ce89
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_52ce89
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        lea esi, ds:[ebx+0x30]
        je public_52cd97
        test byte ptr ds : [eax+8], 2
        je public_52ce74
        public_52cd97 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_52cdac
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_52ce74
        public_52cdac : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_52cdc1
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        je public_52ce74
/*FIXUP public_52cdc1 : nop
        push offset public_5dd4d4 @0x52cdc1*/
  FIXUP public_52cdc1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd4d4
        call dword ptr ds : [public_5c6020]
        mov edx, dword ptr ds : [edi]
        add esp, 4
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [edx+0x84]
        mov ebx, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0xC]
        mov edi, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52ce70
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        lea ecx, ss:[esp+0x18]
        push ebx
        push ecx
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_52ce70 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_52ce74 : nop
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        mov ecx, ebx
        call public_532000
        pop edi
        pop esi
        pop ebx
        add esp, 0x38
        ret 4
        public_52ce89 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        lea esi, ds:[ebx+0x30]
        je public_52ce99
        test byte ptr ds : [eax+8], 2
        je public_52cebb
        public_52ce99 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_52ceaa
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        jne public_52cebb
        public_52ceaa : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_52ce74
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_52ce74
        public_52cebb : nop
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        add ecx, 0x28
        call public_4fcef0
        jmp public_52ce74
        UNREACHABLE_TRAP(0x52cd40)
    }
}

#undef public_52cd97
#undef public_52cdac
#undef public_52cdc1
#undef public_52ce70
#undef public_52ce74
#undef public_52ce89
#undef public_52ce99
#undef public_52ceaa
#undef public_52cebb
